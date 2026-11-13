#include <iostream>
#include <cstring>
#include <cctype>

bool is_palindrome(const char* s) {
    int n = std::strlen(s);

    for (int i = 0; i < n / 2; ++i) {
        char left = std::tolower(static_cast<unsigned char>(s[i]));
        char right = std::tolower(static_cast<unsigned char>(s[n - 1 - i]));

        if (left != right) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << is_palindrome("Level") << " ";
    std::cout << is_palindrome("Radar") << " ";
    std::cout << is_palindrome("hello") << '\n';

    return 0;
}
