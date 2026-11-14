#include <iostream>

struct Wasteful {
    char a;
    int b;
    char c;
};

struct Tidy {
    double b;
    char a;
    char c;
    char d;
    char e;
};

int main() {
    std::cout << sizeof(Wasteful) << ' ' << sizeof(Tidy) << '\n';
}
