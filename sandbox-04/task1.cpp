#include <iostream>

int main() {
    int maxSteps = 0;
int bestNumber = 0;
    for (int i = 1; i <= 99; i++) {
    int n = i;
    int steps = 0;
while (n != 1) {
if (n % 2 == 0) {
    n /= 2;
} else {
    n = 3 * n + 1;
}
++steps;
}
if (steps > maxSteps) {
    maxSteps= steps;
    bestNumber = i;
}
}
std::cout << bestNumber << " " << maxSteps << '\n';
    
return 0;
}
