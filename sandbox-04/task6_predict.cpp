#include <cstdint>
#include <iostream>

int main() {
    int data[10] = {5, 8, 13, 21, 34, 42, 55, 89, 144, 233};
    int needle = 40;
    int looked = 0;
    int found = -1;

    for (int i = 0; i < 10; ++i) {
        looked = looked + 1;
if (data[i] > needle) {
    break;
}
        if (data[i] == needle) {
            found = i;
            break;
        }
    }

    std::cout << found << ' ' << looked << '\n';
}