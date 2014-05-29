#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

void printVect(vector<int> &bob) {
    for (int i = 0; i < bob.size(); i++) {
        cout << i << " : " << bob[i] << endl;
    }
}

void randomize(vector<int> &joe) {
    for (int i = 0; i < joe.size(); i++) {
        joe[i] = rand();
    }
}

vector<int> insert(vector<int> &input, int pos, int val) {

    vector<int> temp;
    for (int i = 0; i < pos; i++) {
        temp.push_back(input[i]);
    }

    temp.push_back(val);

    for (int i = pos; i < input.size(); i++) {
        temp.push_back(input[i]);
    }

    return temp;
}

vector<int> sort(vector<int> &unsorted) {
    vector<int> sorted;

    for (int i = 0; i < unsorted.size(); i++) {
        // insert in correct ordoerp
        int insertMe = unsorted[i];
        int j = 0;
        while (j < sorted.size() && insertMe > sorted[j]) {
            j++;
        }
        sorted = insert(sorted, j, insertMe);
        // printVect(sorted);
    }

    return sorted;
}

int main() {
    vector<int> example(10, 0);

    example[7] = 12345;
    cout << example[7] << endl;

    randomize(example);
    printVect(example);

    example = sort(example);
    printVect(example);

    // What does example.empty(); return at various stages?
    // example.fron() and example.back() work as you'd expect
}
