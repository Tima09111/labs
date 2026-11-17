#include <iostream>

void hanoi(int n, char from, char to, char via) {
    if (n == 0) {
        return;
    }

    hanoi(n - 1, from, via, to);

    std::cout << from << " -> " << to << '\n';

    hanoi(n - 1, via, to, from);
}

int main() {
    hanoi(2, 'A', 'C', 'B');

    return 0;
}

