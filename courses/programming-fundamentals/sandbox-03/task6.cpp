#include <iostream>
using namespace std;

int sum(const int* begin, const int* end) {
    int result = 0;

    while (begin != end) {
        result += *begin;
        begin++;
    }

    return result;
}

int main() {
    int a[3] = {1, 2, 3};

    cout << sum(a, a + 3) << " ";
    cout << sum(a, a) << endl;

    return 0;
}
