#include <iostream>

int digit_sum(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + digit_sum(n / 10);
}

int main() {
    std::cout << digit_sum(12345) << " ";
    std::cout << digit_sum(0) << '\n';

    return 0;
}
