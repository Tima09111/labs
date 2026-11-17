#include <iostream>

void count(int n) {
    if (n == 0) {
        return;
    }

    count(n - 1);
    std::cout << "вниз " << n << '\n';
    std::cout << "вгору " << n << '\n';
}

int main() {
    count(3);
}
