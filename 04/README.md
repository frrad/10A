/*

Make sure to include header file #include<string>

You can assign value to a string manually:

    string name = "Jim Henderson";

or get it from the user:

    string name;
	cin >> name;

If you use cin, you only get up to the first space the user inputs. You can also
use getline. 

    string fullName;
	getline(cin, name);

Here are some operations you can do on strings:

Concatenation: 

    string name;
	name = "Joe";
	name += " Schmo";
	cout << name; //prints "Joe Schmo"

You can access the chars which make up a string like this:

    name = "Frederick"
	cout << name[1] // prints 'r'

(Note that we count beginning with zero, not one.

Here are a few more things we can do with strings:

    name = "Frederick";
	cout << name.length; // prints 9
	cout << name.substr(0,1); // prints 'F' (starts at place zero with length one)
	name.replace(0,1, "McF") // replace substring starting at zero, of length one
	cout << name; // prints "McFrederick"


