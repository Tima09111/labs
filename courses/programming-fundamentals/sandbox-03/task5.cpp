#include <cstdint>
#include <cstring>
#include <iostream>
using namespace std;

void print_bits(float f) {
    uint32_t bits = 0;
    memcpy(&bits, &f, sizeof(bits));

    uint32_t sign = bits >> 31;
    uint32_t exponent = (bits >> 23) & 0xFF;

    cout << sign << " " << exponent << endl;
}

int main() {
    print_bits(-2.5f);
    print_bits(1.0f);

    return 0;
}