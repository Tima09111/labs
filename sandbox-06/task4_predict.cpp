#include <cstdint>
#include <iostream>

struct Buttons {
    bool up, down, left, right, a, b, start, select;
};

int main() {
    std::cout << sizeof(Buttons) << ' ' << sizeof(std::uint8_t) << '\n';

    Buttons many[100] = {};
    std::cout << sizeof(many) << '\n';
}
