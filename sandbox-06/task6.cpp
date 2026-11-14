#include <cstdint>
#include <iostream>

struct Pair {
    std::uint8_t lo;
    std::uint8_t hi;
};

std::uint16_t join(Pair p) {
    return (static_cast<std::uint16_t>(p.hi) << 8) | p.lo;
}

int main() {
    Pair a = {0x34, 0x12};
    Pair b = {0x2C, 0x01};

    std::cout << join(a) << " ";
    std::cout << join(b) << '\n';

    return 0;
}
