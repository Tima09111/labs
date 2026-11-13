#include <cstdint>
#include <iostream>

int main() {
    std::uint8_t face[8] = {0x3C, 0x42, 0x8D, 0x81, 0xA5, 0x81, 0x42, 0x3C};

    for (int y = 0; y < 8; ++y) {
        for (int x = 0; x < 8; ++x) {
            bool lit = (face[y] >> (7 - x)) & 1;
            std::cout << (lit ? '#' : '.');
        }
        std::cout << '\n';
    }
}
