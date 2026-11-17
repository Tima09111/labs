#include <iostream>

int fib(int n) {
    if (n < 2) {
        return n;
    }

    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; ++i) {
        int next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    std::cout << fib(10) << " ";
    std::cout << fib(40) << '\n';

    return 0;
}
