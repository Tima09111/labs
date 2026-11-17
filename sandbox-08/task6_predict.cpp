#include <iostream>

int main() {
    char line[] = "ab=7";

    for (int i = 0; line[i] != '\0'; ) {
        char c = line[i];

        if (c >= '0' && c <= '9') {
            std::cout << "Number(";

            while (line[i] >= '0' && line[i] <= '9') {
                std::cout << line[i];
                i = i + 1;
            }

            std::cout << ") ";
        }
        else if (c >= 'a' && c <= 'z') {
            std::cout << "Ident(" << c << ") ";
            i = i + 1;
        }
        else {
            std::cout << "Punct(" << c << ") ";
            i = i + 1;
        }
    }

    std::cout << '\n';
}
