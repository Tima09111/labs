#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* p = new Point[3];

    p[0] = {1, 0};
    p[1] = {2, 0};
    p[2] = {3, 0};

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += p[i].x;
    }

    std::cout << sum << '\n';

    delete[] p;
    p = nullptr;

    return 0;
}
