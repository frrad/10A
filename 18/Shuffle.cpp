#include <iostream>

using namespace std;

#define SIZE 10

void display(int toshow[], int length) {
    for (int i = 0; i < length; i++) {
        cout << i << ":" << toshow[i] << endl;
    }
    cout << endl;
}

void scramble(int deck[], int length) {}

int main() {
    int numbers[SIZE];
    display(numbers, SIZE);
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i;
    }
    display(numbers, SIZE);

    scramble(numbers, SIZE);
    display(numbers, SIZE);
}
