#include <iostream>

using namespace std;

void print_lines(int side_length) {
    for (int row = 0; row < side_length; row++) {
        for (int col = 0; col < side_length; col++) {
            if ((col - row) % 4 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {

    for (int i = 1; i <= 7; i += 2) {
        cout << "Case " << i << ":" << endl;
        print_lines(i);
    }
}
