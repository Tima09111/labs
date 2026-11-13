#include <iostream>

int find_last(const int* a, int n, int x) {
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int data[5] = {4, 2, 4, 4, 1};

    std::cout << find_last(data, 5, 4) << " ";
    std::cout << find_last(data, 5, 9) << '\n';

    return 0;
}