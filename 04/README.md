String Manipulation
===================

Make sure to include header file `#include<string>`

You can assign value to a string manually:

```c++
string name = "Jim Henderson";
```

or get it from the user:

```c++
string name;
cin >> name;
```

If you use cin, you only get up to the first space the user inputs. You can also
use getline. 

```c++
string fullName;
getline(cin, fullName);
```

Here are some operations you can do on strings:

Concatenation: 

```c++
string name;
name = "Joe";
name += " Schmo";
cout << name << endl; //prints "Joe Schmo"
```

You can access the chars which make up a string like this:

```c++
string name;
name = "Frederick";
cout << name[1]; // prints 'r'
```

(Note that we count beginning with zero, not one.

Here are a few more things we can do with strings:

```c++
string name = "Frederick";
cout << name.length();       //prints 9
cout << name.substr(0,1);    //prints 'F' (starts at place zero with length one)
name.replace(0,1, "McF");    //replace substring starting at zero, of length one
cout << name;                //prints "McFrederick"
name.erase(0,2);             //erases first two characters of name
cout << name;                //prints "Frederick"
cout << name.find("der", 1); //prints the first instance of search string after pos 1 (3)
```

Output Formatting
=================

To use string manipulators, make sure to `#include<iomanip>` 

Here are some different floating point formats we can use

```c++
cout << fixed;
cout << scientific;
cout << defaultfloat;
cout << showpoint;
cout << setprecision(2);
```

and some different ways we can align text:

```c++
cout << left;
cout << right;
cout << setw(10); sets width to 10
```