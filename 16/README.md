Vectors
=======

They are like arrays but cooler. Specifically they: 

    * Can be resized
    * Know their size
    * Can be returned by functions

How I use?

```c++
#include <vector>
using namespace std;

int main() {

    // If unspecified, vector has size 0
    vector<int> v;

    // We can also set size
    vector<double> stuff(10);

    // If we don't specify value to initialize vector with,
    // we don't know what it contains. However, we can specify
    // a default value like so
    vector<int> other_stuff(10, 0);
}
```

There are also some helpful member functions we can use with vectors:

```c++
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
```



2-D Arrays
==========

They are like arrays, but two dimensional.