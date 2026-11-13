#include <iostream>

void caesar(char* s, int shift) {
    shift = (shift % 26 + 26) % 26;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + (s[i] - 'A' + shift) % 26;
        }
    }
}

int main() {
    char text[] = "Hello, World!";

    caesar(text, 3);

    std::cout << text << '\n';

    return 0;
}
