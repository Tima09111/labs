#include <iostream>

int hex_value(const char* s) {
    int result = 0;

    for (int i = 2; s[i] != '\0'; ++i) {
        char c = s[i];
        int digit = 0;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }

        result = result * 16 + digit;
    }

    return result;
}

int main() {
    std::cout << hex_value("0x41") << " ";
    std::cout << hex_value("0xff") << " ";
    std::cout << hex_value("0x1A2") << '\n';

    return 0;
}
