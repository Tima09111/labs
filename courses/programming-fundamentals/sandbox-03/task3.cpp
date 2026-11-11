#include <iostream>
using namespace std;

void reverse(int* a, int n) {
    if (n <= 1) {
        return;
    }

    int* left = a;
    int* right = a + n - 1;

    while (left < right) {
        int t = *left;
        *left = *right;
        *right = t;

        left++;
        right--;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    reverse(a, 5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}