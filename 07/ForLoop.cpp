#include <iostream>

using namespace std;

int main() {
    cout << "FOR LOOP:";
    // Here's a really stupid for loop
    for (int i = 0; i < 10; i++) {
        cout << i << "  ";
    }

    cout << "\nWHILE LOOP:";
    // And here's the same again, with a while loop
    int x = 0;
    while (x < 10) {
        cout << x << " ";
        x++;
    }

    cout << endl;
    return 0;
}
