#include <iostream>

bool every_third() {
    static int count = 0;
    count++;

    return count % 3 == 0;
}

int main() {
    for (int i = 0; i < 7; i++) {
        std::cout << every_third() << " ";
    }

    std::cout << '\n';

    return 0;
}
