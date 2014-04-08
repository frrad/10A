Variables in C++ have types:

    bool   char   int   float   double

Operators
=========

The most common operators are `+`, `-`, `*`, `/`, `%`:

    int x = 1 + 2;
	cout << x << endl;
	//prints 3
	cout << 13 / 5 << endl;
	//prints 2

Some operators change the value of the variable they're applied to:

    int x = 10;
	x++;
	cout << x;
	//Prints 11
	//(There is also --. What do you think it does?)

Other examples of operators like this are `=`, `+=`, `-=`, `*=`, `/=`, `%=`

    int x = 6; 
	//x==6
	x += 5
	//x==11
	x %= 3
	//x==2
	x *= 10
	//x==20

Logic / Comparison
------------------
Comparison operators return a boolean value (true or false):

    == != < > <= >=

	100 == 100
	//true
	//Note, use  == for comparison, = for assignment 
	1 < 2
	//true
	1 > 2
	//false
	1 >=1
	//true
	1 > 1
	//false
	1 <= 1
	//true
	1 != 100 
	true


You can combine boolean values with the logical operators `&&` (and), `||` (or), `!` (not).

	true && true
	//true
	false && true
	//false
	!true
	//false

Other
-----

<< >> 

Ternary Operator:
( logical statement ? this if true : this if false )


User Input
==========
Use `cin` to get user input.

    int x;
	cout << "Please input x: " << endl;
	cin >> x;
	cout << x << endl;
	//prints user inputted numbe

Casting
=======
If you want to use a variable as one of another type, you can cast it.

    float x = 10.12345;
	cout << int(x) << endl;
    //prints 10