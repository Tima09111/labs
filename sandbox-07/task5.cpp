#include <iostream>

void print_binary(int n) {
    if (n < 2) {
        std::cout << n;
        return;
    }

    print_binary(n / 2);
    std::cout << n % 2;
}

int main() {
    print_binary(13);
    std::cout << '\n';

    print_binary(1);
    std::cout << '\n';

    print_binary(8);
    std::cout << '\n';

    return 0;
}
