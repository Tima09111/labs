#include <cstdint>
#include <iostream>
using namespace std;

uint32_t read_le(const unsigned char* b) {
    return uint32_t(b[0])
         | (uint32_t(b[1]) << 8)
         | (uint32_t(b[2]) << 16)
         | (uint32_t(b[3]) << 24);
}

uint32_t read_be(const unsigned char* b) {
    return (uint32_t(b[0]) << 24)
         | (uint32_t(b[1]) << 16)
         | (uint32_t(b[2]) << 8)
         | uint32_t(b[3]);
}

int main() {
    unsigned char b[4] = {0x78, 0x56, 0x34, 0x12};

    cout << hex << read_le(b) << " " << read_be(b) << endl;

    return 0;
}