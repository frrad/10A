#include <iostream>
#include <cstdlib>

// BUG: random numbers aren't random!
// TODO: seed random number generator
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
    } while (smallest <= x && i < length);

    for (; i < length; i++) {
        if (array[i] < smallest && array[i] > x)
            smallest = array[i];
    }
    return smallest;
}

int minLargerIndex(int array[], int length, int x) {
    int i = 0;
    int smallest;
    int index;
    do {
        smallest = array[i];
        index = i;
        i++;
    } while (smallest <= x && i < length);

    for (; i < length; i++) {
        if (array[i] < smallest && array[i] > x) {
            smallest = array[i];
            index = i;
        }
    }
    return index;
}

void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

// just prints in sorted order
void sortPrint(int array[], int length) {
    int smallest = min(array, length);
    int i;
    for (i = 0; i < length; i++) {
        cout << smallest << endl;
        smallest = minLarger(array, length, smallest);
    }
}

void sort(int array[], int length) {
    int smallest = min(array, length);
    int smindex = minLargerIndex(array, length, -100000);
    int i;

    for (i = 0; i < length; i++) {
        // cout << i << " " << smindex << endl;
        swap(array, i, smindex);
        smindex = minLargerIndex(array, length, smallest);
        smallest = minLarger(array, length, smallest);
    }
}

int main() {
    int const arrayLength = 15;
    int arrayEx[arrayLength] = {};

    cout << "first we have zeroes" << endl;

    printArray(arrayEx, arrayLength);

    cout << "now some random numbers!" << endl;

    fillRandom(arrayEx, arrayLength);
    printArray(arrayEx, arrayLength);

    cout << "reversed is " << endl;

    reverseArray(arrayEx, arrayLength);
    printArray(arrayEx, arrayLength);

    cout << "ascending sorted is " << endl;

    sort(arrayEx, arrayLength);
    printArray(arrayEx, arrayLength);

    cout << "descending sorted is " << endl;

    reverseArray(arrayEx, arrayLength);
    printArray(arrayEx, arrayLength);
}
