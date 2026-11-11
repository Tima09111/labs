#include <iostream>
using namespace std;

void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void sort3(int* a, int* b, int* c) {
    if (*a > *b) {
        swap_ptr(a, b);
    }

    if (*a > *c) {
        swap_ptr(a, c);
    }

    if (*b > *c) {
        swap_ptr(b, c);
    }
}

int main() {
    int a = 3, b = 1, c = 2;

    sort3(&a, &b, &c);

    cout << a << " " << b << " " << c << endl;

    return 0;
}