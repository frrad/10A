#include <iostream>

using namespace std;

int twice(int x) { return x * 2; }

int exp(int a, int b) {

    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

int main() {
    cout << twice(10) << endl;
    cout << twice(twice(2)) << endl;

    cout << exp(3, 2) << endl;

    return 0;
}
