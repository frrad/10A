#include <iostream>

using namespace std;

/*
//Version 1
int main(){

  cout << 1 << endl;
  cout << 2 << endl;
  cout << 3 << " fizz" << endl;
  cout << 4 << endl;
  cout << 5 << " buzz" << endl;
  cout << 6 << " fizz" << endl;

  return 0;
}
*/

// Version 2
int main() {
    int i = 1;

    while (i <= 20) {

        cout << i;
        if (i % 3 == 0) {
            cout << "fizz";
        }

        if (i % 5 == 0) {
            cout << "buzz";
        }
        cout << endl;
        i++;
    }

    return 0;
}
