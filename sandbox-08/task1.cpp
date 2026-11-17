#include <iostream>

int count_words(const char* text) {
    int words = 0;
    bool inside = false;

    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] == ' ' || text[i] == ',' || text[i] == '\t') {
            inside = false;
        } else if (!inside) {
            inside = true;
            words++;
        }
    }

    return words;
}

int main() {
    std::cout << count_words("one,two three") << " ";
    std::cout << count_words("  a,,b  ") << '\n';

    return 0;
}
