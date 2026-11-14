#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* p = new Point{3, 4};

    std::cout << p->x + p->y << '\n';

    delete p;
    p = nullptr;

    return 0;
}
