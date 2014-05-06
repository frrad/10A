#include <iostream>

using namespace std;

int twice(int x) { return x * 2; }

double twice(double x) { return x * 2; }

int main() {

    int a = 10;

    double x = 100;

    cout << twice(a) << endl;

    cout << twice(x) << endl;
}
