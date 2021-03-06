#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int y = 2;
    int z = (y = x);
    cout << "Ex 0: " << z << endl;

    x = 1;
    y = 2;
    x *= y + (x += 3);
    cout << "Ex 1: " << x << endl;

    x = 10;
    (x *= 2) += 2;
    cout << "Ex 2: " << x << endl;

    x = 10;
    (x *= 2) += (x);
    cout << "Ex 3: " << x << endl;

    x = 2;
    y = 4;
    z = x + ++y;
    cout << "Ex 4: "
         << "x=" << x << " y=" << y << " z=" << z << endl;

    x = 2;
    y = 4;
    z = x++ + y;
    cout << "Ex 5: "
         << "x=" << x << " y=" << y << " z=" << z << endl;

    x = 2;
    y = 4;
    z = x++ + y;
    cout << "Ex 6: "
         << "x=" << x << " y=" << y << " z=" << z << endl;

    // some stuff with int / float
    int a, b;
    float c, d;

    a = 10;
    c = .15;
    cout << "Ex A: " << a *c << endl;

    b = 3;
    cout << "Ex B: " << a *c / b << endl;

    a = 5;
    c = 3;
    b = 4;
    cout << "Ex C: " << a *c / b << endl;
    cout << "Ex D: " << a * 3. / b << endl;
    cout << "Ex E: " << a * 3 / b << endl;
}
