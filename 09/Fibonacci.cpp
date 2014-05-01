#include <iostream>

using namespace std;

int fib(int n) {
    int a = 1;
    int b = 1;

    for (int i = 0; i < n; i++) {
        int temp = b;
        b = a + b;
        a = temp;
        // cout << "a=" << a << " b=" << b << endl;
    }
    return b;
}

int main() {

    for (int i = 0; i < 10; i++) {

        cout << fib(i) << endl;
    }

    return 0;
}
