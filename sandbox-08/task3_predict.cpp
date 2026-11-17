#include <iostream>

bool is_hex_digit(char c) {
    return (c >= '0' && c <= '9') ||
           (c >= 'a' && c <= 'f') ||
           (c >= 'A' && c <= 'F');
}

bool valid_hex(const char* s) {
    if (s[0] != '0' || s[1] != 'x') {
        return false;
    }

    int digits = 0;

    for (int i = 2; s[i] != '\0'; ++i) {
        if (!is_hex_digit(s[i])) {
            return false;
        }

        digits = digits + 1;
    }

    return true;
}

int main() {
    const char* tests[] = {"0x41", "0xGG", "0x", "41", "0xff"};

    for (int i = 0; i < 5; ++i) {
        std::cout << tests[i] << " "
                  << (valid_hex(tests[i]) ? "так" : "ні") << '\n';
    }
}
