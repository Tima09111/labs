#include <iostream>

int main() {
    int m[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    int* flat = &m[0][0];

    std::cout << m[1][2] << ' ' << flat[1 * 4 + 2] << '\n';
    std::cout << m[0][6] << '\n';
}
