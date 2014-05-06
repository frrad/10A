#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int a, int b) { return (rand() % (b - a + 1)) + a; }

int main() {
    srand(static_cast<int>(time(NULL)));

    cout << static_cast<char>(random(65, 90)) << endl;

    return 0;
}
