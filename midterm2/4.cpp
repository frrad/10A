#include <iostream>

using namespace std;

int sum_of_squares(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i * i;
    }
    return total;
}

// This is a faster alternative. Don't worry if you don't understand how it
// works.
int fastSum(int n) { return (n * (1 + n) * (1 + 2 * n)) / 6; }

int main() {
    for (int i = 0; i < 10; i++) {
        cout << "Sum of squares up to " << i << ":" << endl;
        cout << sum_of_squares(i);
        cout << " (" << fastSum(i) << ")" << endl;
    }
}
