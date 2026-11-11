#include <iostream>
using namespace std;

const int* max_ptr(const int* a, int n) {
    if (n <= 0) {
        return nullptr;
    }

    const int* p = &a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > *p) {
            p = &a[i];
        }
    }

    return p;
}

int main() {
    int a[5] = {3, 9, 2, 9, 5};

    const int* p = max_ptr(a, 5);

    if (p != nullptr) {
        cout << *p << " " << p - a << endl;
    }

    return 0;
}