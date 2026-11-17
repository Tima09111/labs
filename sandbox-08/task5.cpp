#include <iostream>

int hex_digit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }

    return -1;
}

bool check_nmea(const char* s) {
    if (s[0] != '$') {
        return false;
    }

    int sum = 0;
    int i = 1;

    while (s[i] != '*' && s[i] != '\0') {
        sum = sum ^ s[i];
        i++;
    }

    if (s[i] != '*') {
        return false;
    }

    if (s[i + 1] == '\0' || s[i + 2] == '\0') {
        return false;
    }

    int a = hex_digit(s[i + 1]);
    int b = hex_digit(s[i + 2]);

    if (a == -1 || b == -1 || s[i + 3] != '\0') {
        return false;
    }

    int expected = a * 16 + b;

    return sum == expected;
}

int main() {
    const char* first = "$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";

    const char* second = "$GPGGA,123519,4807.039,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";

    std::cout << check_nmea(first) << " ";
    std::cout << check_nmea(second) << '\n';

    return 0;
}
