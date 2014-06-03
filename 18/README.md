Pointers Ctd.
=============

Pointer Arithmetic
------------------
An array is just a pointer to the first element.

```c++
int a[10] = {};
a[0] = 1;
cout << *a; //Prints 1
```

Arrow Operator
--------------
Access fields 
```c++
Student s("Joe	Bruin", 21, 4.0);
Student *p = &s;
string name = p->getName();
```

`this` pointer
--------------
this points to current object in a class.

Dynamic Allocation 
==================
New puts stuff in heap instead of stack

```c++
int *p = new int(2);
delete[] p;
delete p; // just kills first element
```

Destructor
----------
`~Name`