#include <iostream>

int main() {
   int a[5] = {2, 1, 3, 5, 4};
    int swaps = 0;

    for (int pass = 0; pass < 5; ++pass) {
        for (int i = 0; i + 1 < 5; ++i) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                swaps = swaps + 1;
            }
        }
    }

    std::cout << swaps << '\n';
}
