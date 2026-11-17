#include <iostream>

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    for (int n = 10; n <= 13; ++n) {
        std::cout << n << "! = " << fact(n) << '\n';
    }
}
