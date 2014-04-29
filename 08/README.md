Functions
=========

Functions are structures which take in information and, depending on what inputs
they receive, output other information.

```c++
int twice(int x){
    return x * 2;
}
```

Here, the leading `int` indicates that the function returns an integer
value. The name of the function is 'twice' and the input is an integer, whose
value can be accessed inside the function as `x`.


Nested Loops
============

You can have more than one loop going on at once:

```c++
for(int x = 0; x < 10; x++){
    for(int j = 0; j < 10; j++){
	    cout << "X";
	}
	cout << endl;
}
```
