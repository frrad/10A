#include <iostream>

using namespace std;

class linkedList {
  public:
    linkedList();
    linkedList(int v);

    void addAfter(linkedList *nextLink);
    int value;
    linkedList *next;
};

linkedList::linkedList() {
    value = 0;
    next = NULL;
}

linkedList::linkedList(int v) {
    value = v;
    next = NULL;
}

void linkedList::addAfter(linkedList *nextLink) {
    nextLink->next = next;
    next = nextLink;
}

void print(linkedList list) {
    cout << list.value << endl;
    while (list.next != NULL) {
        list = *list.next;
        cout << list.value << endl;
    }
}

int main() {
    linkedList v(12);
    print(v);

    cout << "====" << endl;
    linkedList w(15);
    v.addAfter(&w);
    print(v);

    // We can insert elements in the middle
    cout << "====" << endl;
    linkedList y(1337);
    v.addAfter(&y);
    print(v);
}
