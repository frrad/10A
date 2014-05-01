#include <iostream>

using namespace std;

void rectangle(int l, int w) {
    for (int i = 0; i < l; i++) {

        for (int j = 0; j < w; j++) {
            cout << "X";
        }
        cout << endl;
    }
}

void triangle(int width) {
    int height = (width + 1) / 2;
    for (int h = 0; h < height; h++) {
        int spaces = ((width - 1) / 2) - h;

        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        // draw 2 h + 1 Xs
        for (int i = 0; i < 2 * h + 1; i++) {
            cout << "X";
        }
        cout << endl;
    }
}

void spaceship(int length, int width) {
    triangle(width);
    rectangle(length, width);
    triangle(width);
}

int main() {

    int l, w;
    cout << "length?";
    cin >> l;
    cout << "width?";
    cin >> w;

    spaceship(l, w);

    return 0;
}
