#include <iostream>

int total(int a[10], int n) {
    std::cout << sizeof(a) << '\n';

    int s = 0;
    for (int i = 0; i < n; ++i) {
        s = s + a[i];
    }
    return s;
}

int main() {
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << sizeof(data) << '\n';
    std::cout << total(data, 10) << '\n';
}
