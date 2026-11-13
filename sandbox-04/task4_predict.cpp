#include <iostream>

int counter() {
    static int calls = 0;
    calls = calls + 1;
    return calls;
}

int plain() {
    int calls = 0;
    calls = calls + 1;
    return calls;
}

int main() {
    for (int i = 0; i < 4; ++i) {
        std::cout << counter() << ' ' << plain() << '\n';
    }

    return 0;
}
