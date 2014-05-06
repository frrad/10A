#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double round(double x, int places) {
    return floor(x * pow(10, places) + .5) / pow(10, places);
}

int main() {
    double x = 123.4567891234567;

    // Nearest integer
    // round(x,0)
    cout << floor(x + .5) << endl;

    // tenth
    // round(x,1)
    cout << floor(x * 10 + .5) / 10.0 << endl;

    // hundredth
    // round(x,2)
    cout << floor(x * 100 + .5) / 100.0 << endl;

    cout << fixed << setprecision(15);
    for (int i = 0; i < 15; i++) {
        cout << "places =" << i << " =>" << round(x, i) << endl;
    }
}
