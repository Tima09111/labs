#include <iostream>

int main() {
    int level = 7;

    switch (level) {
        case 1:
            std::cout << "one\n";
            [[fallthrough]];
        case 2:
            std::cout << "two\n";
            [[fallthrough]];
        case 3:
            std::cout << "three\n";
            break;
        default:
            std::cout << "other\n";
    }

    return 0;
}
