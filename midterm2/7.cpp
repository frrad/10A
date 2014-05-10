#include <iostream>

using namespace std;

void foo(int a, int &b) {
    a = a + b;
    b = 2 * a;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 1;
    int y = 2;
    foo(x, y);
    cout << "x = " << x << ", y = " << y << endl;
}
