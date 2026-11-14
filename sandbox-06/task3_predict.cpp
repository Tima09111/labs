#include <iostream>

struct Sprite {
    int x, y;
    int trail[3];
};

int main() {
    Sprite a = {1, 2, {7, 8, 9}};
    Sprite& b = a;

    b.x = 100;
    b.trail[0] = 0;

    std::cout << a.x << ' ' << a.trail[0] << '\n';
    std::cout << b.x << ' ' << b.trail[0] << '\n';
}