#include <iostream>

struct Vec {
    int x, y;
};

Vec add(Vec a, Vec b) {
    Vec result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

void scale(Vec* v, int k) {
    v->x = v->x * k;
    v->y = v->y * k;
}

int main() {
    Vec a = {1, 2};
    Vec b = {3, 4};

    Vec result = add(a, b);

    std::cout << result.x << " " << result.y << '\n';

    scale(&result, 2);

    std::cout << result.x << " " << result.y << '\n';

    return 0;
}
