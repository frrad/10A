// Write a lucky coin game

// The user starts out with 10 dollars. He can bet any amount of his money on
// the outcome of a coin toss. If it lands heads, he receives an amount equal to
// that of his bet. If tails, he loses his bet.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    double dollars = 10;
    double bet;
    cout << endl;

    // What happens if we don't seed the PRNG?
    // srand(static_cast<int>(time(NULL)));

    do {
        // tell user how much money he has
        cout << "You've got " << dollars << " dollars." << endl;

        // ask user for bet
        do {
            cout << "How much do you want to bet?";
            cin >> bet;
        } while (bet < 0 || bet > dollars);

        // flip a coin
        bool isHeads = rand() % 2 == 0;

        // adjust money
        if (isHeads) {
            dollars += bet;
            cout << "You win " << bet << " dollars" << endl;
        } else {
            dollars -= bet;
            cout << "You lost " << bet << " dollars" << endl;
        }

    } while (bet != 0 && dollars > 0);

    return 0;
}
