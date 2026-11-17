#include <iostream>

void tokenize(const char* line) {
    for (int i = 0; line[i] != '\0'; ) {
        char c = line[i];

        if (c >= '0' && c <= '9') {
            std::cout << "Number(";

            while (line[i] >= '0' && line[i] <= '9') {
                std::cout << line[i];
                i++;
            }

            std::cout << ") ";
        }
        else if (c >= 'a' && c <= 'z') {
            std::cout << "Ident(";

            while (line[i] >= 'a' && line[i] <= 'z') {
                std::cout << line[i];
                i++;
            }

            std::cout << ") ";
        }
        else {
            std::cout << "Punct(" << c << ") ";
            i++;
        }
    }

    std::cout << '\n';
}

int main() {
    tokenize("ab=7");
    tokenize("count=12+x");

    return 0;
}
