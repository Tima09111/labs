#include <iostream>

void by_value(int x) {
    x = x + 1;
}

void by_pointer(int* x) {
    *x = *x + 1;
}

void by_reference(int& x) {
    x = x + 1;
}

int main() {
    int a = 10;

    for (int i = 0; i < 10; i++) {
    by_value(a);
}
    std::cout << a << '\n';

    by_pointer(&a);
    std::cout << a << '\n';

    by_reference(a);
    std::cout << a << '\n';
}
