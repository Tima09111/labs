#include <iostream>

bool check(int x) {
    std::cout << "check " << x << '\n';
    return x > 0;
}

int main() {
    if (check(1) && check(0)) {
        std::cout << "both\n";
    }

    if (check(2) || check(3)) {
        std::cout << "either\n";
    }

    return 0;
}