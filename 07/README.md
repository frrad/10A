The `for` loop
==============

The for loop is another loop, like the while loop. It has an index variable,
which is incremented until the stop condition is met

```c++
for(int x = 0; x < 10; x++){
    cout << x << endl;
}
```

Random Numbers
==============

```c++
#include <cstdlib>
cout << rand(); // Prints a pseudorandom number between 0 and RAND_MAX
```

Seeding with time:

```c++
#include <cstdlib>
#include <ctime>

int seed = static_cast<int>(time(NULL));
srand(seed);
```

Input Validation
================

If user enters wrong data type, `cin.fail()` will be set to true

```c++
if (cin.fail()){
	cout << "Nice job, stupid";
	cin.clear();
	string trashcan;
	getline(cin, trashcan);

    cout << "try again";
	cin >> x;
}
```
