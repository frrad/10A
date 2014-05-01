#include <iostream>

using namespace std;

// return rectangle of appropriate size
string rectangle(int a, int b) {
    string ans = "";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            ans += 'X';
        }
        ans += "\n";
    }
    return ans;
}

int main() {

    cout << rectangle(3, 15);

    for (int x = 0; x < 10; x++) {
        for (int j = 0; j < 10; j++) {
            cout << "X";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            for (int b = 0; b < 3; b++) {
                cout << "b";
            }
            cout << "a";
        }
        cout << "i";
    }

    cout << endl;
    return 0;
}
