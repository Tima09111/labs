#include <iostream>

struct Packet {
    double value;
    int id;
    char type;
    char flags;
};

int main() {
    std::cout << sizeof(Packet) << '\n';

    return 0;
}