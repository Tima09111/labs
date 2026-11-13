#include <iostream>

int max_of(const int* a, int n) {
    int max = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int data[] = {5, 42, 7, 1, 9, 13, 2, 8, 30, 11};

    int n = sizeof(data) / sizeof(data[0]);

    std::cout << n << " " << max_of(data, n) << '\n';

    return 0;
}
