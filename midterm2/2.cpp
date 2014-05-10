#include <iostream>
#include <cstdlib>

using namespace std;

bool coin() { return rand() % 2 == 0; }

int main() {
    // Note that we always get the same sequence of values. How could we fix
    // this?
    for (int i = 0; i < 10; i++) {
        if (coin())
            cout << "We got Heads" << endl;
        else
            cout << "We got Tails" << endl;
    }
}
