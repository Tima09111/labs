#include <iostream>

int days_in_month(int m) {

switch (m) {
    case 2:
        return 28;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        default:
        return 0;
}
}
int main() {
std::cout << days_in_month(2) << " ";
std::cout << days_in_month(4) << " ";
std::cout << days_in_month(12) << '\n';
    return 0;
}
