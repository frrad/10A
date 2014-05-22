#include <iostream>
#include <cstdlib>

// BUG: random numbers aren't random!

using namespace std;

void printArray(int array[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        cout << i << " : " << array[i] << endl;
    }
}

void fillRandom(int array[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        array[i] = rand();
    }
}

void reverseArray(int array[], int length) {
    int tempArray[length];
    int i;
    for (i = 0; i < length; i++) {
        tempArray[i] = array[i];
    }
    for (i = 0; i < length; i++) {
        array[i] = tempArray[length - i - 1];
    }
}

void reverseArray2(int array[], int length) {
    int i;
    for (i = 0; i < length / 2; i++) {
        int temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

// return smallest
int min(int array[], int length) {

    int smallest = array[0];
    int i;
    for (i = 0; i < length; i++) {
        if (array[i] < smallest)
            smallest = array[i];
    }

    return smallest;
}

// return smallest array elt larger than x
int minLarger(int array[], int length, int x) {
    int i = 0;
    int smallest;
    do {
        smallest = array[i];
        i++;
    } while (smallest <= x);

    for (; i < length; i++) {
        if (array[i] < smallest && array[i] > x)
            smallest = array[i];
    }
    return smallest;
}

void sort(int array[], int length) {
    int smallest = min(array, length);
    int i;
    for (i = 0; i < length; i++) {
        cout << smallest << endl;
        smallest = minLarger(array, length, smallest);
    }
}

int main() {
    int arrayEx[10] = {};
    fillRandom(arrayEx, 10);
    printArray(arrayEx, 10);

    cout << "reversed is " << endl;

    reverseArray2(arrayEx, 10);
    printArray(arrayEx, 10);

    sort(arrayEx, 10);
}
