#include <iostream>
#include <cstdlib>

using namespace std;

class Game {
  public:
    Game();
    Game(Game &oldgame);
    void Print() const;
    bool PlaceX(int i, int j);
    bool PlaceO(int i, int j);
    bool XWon() const;
    bool OWon() const;
    bool Tied() const;
    void RandomO();
    void RandomX();

    // return true if it's the move of X player
    bool XTurn() const;

  private:
    char board[3][3];
    int NumberChar(char x) const;
};

bool Game::XTurn() const {
    // cout << "there are" << NumberChar('O') << "os" << endl;
    // cout << "there are" << NumberChar('X') << "Xs" << endl;

    return NumberChar('O') >= NumberChar('X');
}

int Game::NumberChar(char x) const {
    int total = 0;
    for (int i = 0; i < 9; i++) {
        if (x == board[i / 3][i % 3])
            total++;
    }
    return total;
}

Game::Game(Game &oldGame) {
    for (int i = 0; i < 9; i++) {
        board[i % 3][i / 3] = oldGame.board[i % 3][i / 3];
    }
}

void Game::RandomO() {
    int i, j;
    do {
        i = rand() % 3 + 1;
        j = rand() % 3 + 1;
    } while (!PlaceO(i, j));
}
void Game::RandomX() {
    int i, j;
    do {
        i = rand() % 3 + 1;
        j = rand() % 3 + 1;
    } while (!PlaceX(i, j));
}

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

char WhoWinsRandom(Game &game) {
    // first we should determine whose move it is

    Game tempBoard(game);
    if (!tempBoard.XTurn())
        tempBoard.RandomO();

    do {
        // First X moves

        tempBoard.RandomX();
        if (tempBoard.XWon() || tempBoard.Tied()) {
            break;
        }

        // Then O moves
        tempBoard.RandomO();

    } while (!tempBoard.XWon() && !tempBoard.OWon() && !tempBoard.Tied());

    if (tempBoard.XWon())
        return 'X';

    if (tempBoard.OWon())
        return 'O';

    return ' ';
}

int *RandomStats(Game &game, int *stats) {
    const int trials = 1000;
    int owins = 0;
    int xwins = 0;
    int ties = 0;

    for (int i = 0; i < trials; i++) {
        switch (WhoWinsRandom(game)) {
        case('X') :
            xwins++;
            break;
        case('O') :
            owins++;
            break;
        case(' ') :
            ties++;
            break;
        default:
            cout << "asdfadfsa";
        }
    }

    cout << "In " << trials << " trials, O won " << owins
         << " times, and X won " << xwins << " times." << endl;

    stats[0] = owins;
    stats[1] = xwins;
    stats[2] = ties;
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
        WhoWinsRandom(game);

        if (game.XWon() || game.Tied()) {
            break;
        }

        cout << "O player move" << endl;
        game.RandomO();
        game.Print();
        int status[3];
        RandomStats(game, status);
        cout << status[0] << status[1] << status[2] << endl;

    } while (!game.XWon() && !game.OWon() && !game.Tied());

    if (game.XWon())
        cout << "X WON!!!" << endl;
    if (game.OWon())
        cout << "O WON!!!" << endl;
    if (game.Tied())
        cout << "TIE GAME!!!" << endl;

    return 0;
}
