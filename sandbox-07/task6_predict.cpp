#include <iostream>

int moves = 0;

void hanoi(int n, char from, char to, char via) {
    if (n == 0) {
        return;
    }

    hanoi(n - 1, from, via, to);
    moves = moves + 1;
    hanoi(n - 1, via, to, from);
}

int main() {
    hanoi(10, 'A', 'C', 'B');
    std::cout << moves << '\n';
}

