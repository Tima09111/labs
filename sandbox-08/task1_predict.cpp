#include <iostream>

int main() {
    char text[] = "one,two three";
    int words = 0;
    bool inside = false;

    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] == ' ') {
            inside = false;
        } else if (!inside) {
            inside = true;
            words = words + 1;
        }
    }

    std::cout << words << '\n';
}
