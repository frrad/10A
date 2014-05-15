#include <iostream>

using namespace std;

class Game {
  public:
    Game();
    void Print() const;
    bool PlaceX(int i, int j);
    bool PlaceO(int i, int j);
    bool XWon() const;
    bool OWon() const;
    bool Tied() const;

  private:
    char board[3][3];
};

bool Game::Tied() const {

    if (XWon())
        return false;
    if (OWon())
        return false;
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 'X' || board[i][j] == 'O')
                counter++;
        }
    }

    // cout << "count = " << counter << endl;

    if (counter == 9)
        return true;
    return false;
}

bool Game::XWon() const {
    int counter;
    char const playertoken = 'X';

    // Rows
    for (int j = 0; j < 3; j++) {
        counter = 0;
        for (int i = 0; i < 3; i++) {
            if (board[j][i] == playertoken)
                counter++;
        }
        if (counter == 3)
            return true;
    }

    // Columns
    for (int j = 0; j < 3; j++) {
        counter = 0;
        for (int i = 0; i < 3; i++) {
            if (board[i][j] == playertoken)
                counter++;
        }
        if (counter == 3)
            return true;
    }

    if (board[1][1] == playertoken) {
        if (board[0][0] == playertoken && board[2][2] == playertoken)
            return true;

        if (board[0][2] == playertoken && board[2][0] == playertoken)
            return true;
    }

    return false;
}

bool Game::OWon() const {
    int counter;
    char const playertoken = 'O';

    // Rows
    for (int j = 0; j < 3; j++) {
        counter = 0;
        for (int i = 0; i < 3; i++) {
            if (board[j][i] == playertoken)
                counter++;
        }
        if (counter == 3)
            return true;
    }

    // Columns
    for (int j = 0; j < 3; j++) {
        counter = 0;
        for (int i = 0; i < 3; i++) {
            if (board[i][j] == playertoken)
                counter++;
        }
        if (counter == 3)
            return true;
    }

    if (board[1][1] == playertoken) {
        if (board[0][0] == playertoken && board[2][2] == playertoken)
            return true;

        if (board[0][2] == playertoken && board[2][0] == playertoken)
            return true;
    }

    return false;
}

bool Game::PlaceX(int i, int j) {
    i--;
    j--;

    if (i < 0 || i > 2)
        return false;

    if (j < 0 || j > 2)
        return false;

    char current = board[i][j];
    if (current != ' ')
        return false;

    board[i][j] = 'X';

    return true;
}

bool Game::PlaceO(int i, int j) {
    i--;
    j--;

    if (i < 0 || i > 2)
        return false;

    if (j < 0 || j > 2)
        return false;

    char current = board[i][j];
    if (current != ' ')
        return false;

    board[i][j] = 'O';

    return true;
}

Game::Game() {
    for (int i = 0; i < 9; i++) {
        board[i % 3][i / 3] = ' ';
    }
}

void Game::Print() const {
    cout << " 123" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1;
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    Game game;

    int i, j;
    game.Print();

    do {
        cout << "X player move" << endl;
        do {
            cout << "i coord ";
            cin >> i;
            cout << "j coord ";
            cin >> j;
        } while (!game.PlaceX(i, j));
        game.Print();

        if (game.XWon() || game.Tied()) {
            break;
        }

        cout << "O player move" << endl;
        do {
            cout << "i coord ";
            cin >> i;
            cout << "j coord ";
            cin >> j;
        } while (!game.PlaceO(i, j));
        game.Print();

    } while (!game.XWon() && !game.OWon() && !game.Tied());

    if (game.XWon())
        cout << "X WON!!!" << endl;
    if (game.OWon())
        cout << "O WON!!!" << endl;
    if (game.Tied())
        cout << "TIE GAME!!!" << endl;

    return 0;
}
