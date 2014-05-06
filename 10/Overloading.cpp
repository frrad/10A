#include <iostream>

using namespace std;

int twice(int x) { return x * 2; }

string twice(string x) { return x + x; }

int main() {

    int a = 10;

    string x = "asdf";

    cout << twice(a) << endl;

    cout << twice(x) << endl;
}
