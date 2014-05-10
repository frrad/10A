#include <iostream>
#include <cstdlib>

using namespace std;

double randDouble() { return 1.0 * rand() / RAND_MAX; }

// Return a random double between x,y. Assuming x < y
double randDoubleXY(double x, double y) {
    double range = y - x;
    return x + randDouble() * range;
}

int main() {

    for (int i = 0; i < 10; i++) {
        cout << "Random Number:" << randDouble() << endl;
    }

    double x = 50;
    double y = 60;

    for (int i = 0; i < 10; i++) {
        cout << "Random Number:" << randDoubleXY(x, y) << endl;
    }
}
