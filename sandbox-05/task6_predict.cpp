#include <iostream>

int main() {
    char text[] = "khoor";
int shift = 23;

    for (int i = 0; text[i] != '\0'; ++i) {
        text[i] = (char)('a' + (text[i] - 'a' + shift) % 26);
    }

    std::cout << text << '\n';
}
