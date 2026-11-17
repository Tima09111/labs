#include <iostream>
#include <climits>

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * fact(n - 1);
}

int main() {
    int answer = 1;

    for (int n = 1; n <= 20; ++n) {
        if (fact(n) <= INT_MAX) {
            answer = n;
        } else {
            break;
        }
    }

    std::cout << answer << '\n';

    return 0;
}
