#include <iostream>

void min_max(const int* a, int n, int& mn, int& mx) {
    mn = a[0];
    mx = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
        }

        if (a[i] > mx) {
            mx = a[i];
        }
    }
}

int main() {
    int a[4] = {4, -2, 9, 0};

    int mn, mx;

    min_max(a, 4, mn, mx);

    std::cout << mn << " " << mx << '\n';

    return 0;
}
