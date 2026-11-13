#include <cstdint>
#include <iostream>

int main() {
    int count = 0;

    for (unsigned i = 10; i >= 0; --i) {
        count = count + 1;
    }

    std::cout << count << '\n';
}