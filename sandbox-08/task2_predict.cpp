#include <iostream>

int main() {
    char expr[] = "7*6x";
    int i = 0;
    int left = 0;

    while (expr[i] >= '0' && expr[i] <= '9') {
        left = left * 10 + (expr[i] - '0');
        i = i + 1;
    }

    char op = expr[i];
    i = i + 1;

    int right = 0;

    while (expr[i] >= '0' && expr[i] <= '9') {
        right = right * 10 + (expr[i] - '0');
        i = i + 1;
    }

    int result = (op == '+') ? left + right : (op == '-') ? left - right : left + right;

    std::cout << left << ' ' << op << ' ' << right << " = " << result << '\n';
}
