#include <iostream>

int calls = 0;

int fib(int n) {
    calls = calls + 1;

    if (n < 2) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
   std::cout << fib(20) << ' ' << calls << '\n';
}
