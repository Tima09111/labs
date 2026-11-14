#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Green;
    int x = static_cast<int>(c) + 10;

    std::cout << x << '\n';

    return 0;
}
