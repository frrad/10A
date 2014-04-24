// Create a simple calculator:

// Prompt the user to select an operation (+ - * /) and an amount, then perform
// the operation keeping a running total of the amount.

#include <iostream>

using namespace std;

int main() {
    double total = 0;
    double amount;
    char operation;

    do {
        // tell user current total
        cout << "Your total is " << total << endl;

        // ask for an amount
        cout << "What amount do you want " << endl;
        cin >> amount;

        // ask for an operation
        cout << "what operation do you want to do ?" << endl;
        cin >> operation;

        // apply operation
        switch (operation) {
        case '+':
            total += amount;
            break;
        case '-':
            total -= amount;
            break;
        case '*':
            total *= amount;
            break;
        case '/':
            total /= amount;
            break;
        default:
            cout << "you suck try again: " << endl;
        }

    } while (true);

    return 0;
}
