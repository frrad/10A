#include <iostream>

using namespace std;

int intExp(int x, int a = 2) {
    if (a == 1)
        return x;

    if (a % 2 == 0)
        return intExp(x, a / 2) * intExp(x, a / 2);

    return intExp(x, a / 2) * intExp(x, a / 2) * x;
}

int main() {
    intExp(5); // 25
}
