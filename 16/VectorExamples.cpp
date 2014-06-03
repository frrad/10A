#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

void printVect(vector<int> &bob) {
    for (int i = 0; i < bob.size(); i++) {
        cout << i << " : " << bob[i] << endl;
    }
    cout << "----------------" << endl;
}

void randomize(vector<int> &joe) {
    for (int i = 0; i < joe.size(); i++) {
        joe[i] = rand();
    }
}

vector<int> sort(vector<int> &unsorted) {
    vector<int> sorted;

    for (int i = 0; i < unsorted.size(); i++) {
        // insert in correct ordoer
        int insertMe = unsorted[i];
        int j = 0;
        while (j < sorted.size() && insertMe > sorted[j])
            j++;

        sorted.insert(sorted.begin() + j, insertMe);

        // printVect(sorted);
    }

    return sorted;
}

int main() {
    vector<int> example(10, 0);

    example[7] = 12345;
    printVect(example);

    randomize(example);
    printVect(example);

    example = sort(example);
    printVect(example);

    // What does example.empty(); return at various stages?
    // example.front() and example.back() work as you'd expect
}
