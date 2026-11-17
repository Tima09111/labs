#include <cstdint>
#include <iostream>

int main() {
    const char* sentence = "$GPGGA,123519,4807.039,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";

    int sum = 0;
    int i = 1;

    while (sentence[i] != '*') {
        sum = sum ^ sentence[i];
        i = i + 1;
    }

    std::cout << std::hex << sum << '\n';
}
