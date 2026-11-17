#include <iostream>

void calculate(const char* expr) {
    int i = 0;
    int left = 0;

    while (expr[i] >= '0' && expr[i] <= '9') {
        left = left * 10 + (expr[i] - '0');
        i++;
    }

    char op = expr[i];
    i++;

    int right = 0;

    while (expr[i] >= '0' && expr[i] <= '9') {
        right = right * 10 + (expr[i] - '0');
        i++;
    }

    if (expr[i] != '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }

    int result;

    if (op == '+') {
        result = left + right;
    } else if (op == '-') {
        result = left - right;
    } else if (op == '*') {
        result = left * right;
    } else {
        std::cout << "error at 0\n";
        return;
    }

    std::cout << result << '\n';
}

int main() {
    calculate("12+34");
    calculate("7*6x");

    return 0;
}
