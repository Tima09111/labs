#include <iostream>

int main() {
    char word[] = "Level";
    int n = 5;
    bool same = true;

    for (int i = 0; i < n / 2; ++i) {
        if (word[i] != word[n - 1 - i]) {
            same = false;
        }
    }

    std::cout << (same ? "паліндром" : "ні") << '\n';
}