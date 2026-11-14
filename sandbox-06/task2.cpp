#include <iostream>

enum class Dir { North, East, South, West };

Dir turn_right(Dir d) {
    switch (d) {
        case Dir::North:
            return Dir::East;

        case Dir::East:
            return Dir::South;

        case Dir::South:
            return Dir::West;

        case Dir::West:
            return Dir::North;
    }

    return d;
}

int main() {
    Dir d = Dir::North;

    for (int i = 0; i < 5; i++) {
        d = turn_right(d);
        std::cout << static_cast<int>(d) << " ";
    }

    std::cout << '\n';

    return 0;
}
