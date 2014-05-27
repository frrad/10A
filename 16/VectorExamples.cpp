#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> example(10, 0);

    cout << example.size() << endl;     // 10
    cout << example.capacity() << endl; // also 10

    example.resize(5);
    cout << example.size() << endl;     // now it's 5
    cout << example.capacity() << endl; // still 10

    example.clear();
    cout << example.size() << endl;     // and zero
    cout << example.capacity() << endl; // still 10

    // What does example.empty(); return at various stages?
    // example.fron() and example.back() work as you'd expect

    // What about this one?
    vector<int> ex2;

    cout << ex2.size() << endl;     // 0
    cout << ex2.capacity() << endl; // also 0
}
