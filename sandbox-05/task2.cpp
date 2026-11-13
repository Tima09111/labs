#include <cstdint>
#include <iostream>

std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t result = 0;

    for (int i = 0; i < 8; ++i) {
        result = (result << 1) | (b & 1);
        b = b >> 1;
    }

    return result;
}

int main() {
    std::cout << std::hex;

    std::cout << static_cast<int>(mirror(0x01)) << " ";
    std::cout << static_cast<int>(mirror(0xA0)) << " ";
    std::cout << static_cast<int>(mirror(0x3C)) << '\n';

    return 0;
}
