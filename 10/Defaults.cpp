#include <iostream>

using namespace std;

double intExp(double x, int a = 2) {
    if (a == 1)
        return x;
    if (a == -1)
        return 1 / x;

    if (a % 2 == 0)
        return intExp(x, a / 2) * intExp(x, a / 2);

    if (a < 0)
        return intExp(x, a / 2) * intExp(x, a / 2) * 1 / x;
    return intExp(x, a / 2) * intExp(x, a / 2) * x;
}

int main() {
    intExp(5); // 25
    cout << intExp(5) << endl;

    cout << intExp(10, -3) << endl;
}
