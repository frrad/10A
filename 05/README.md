Review
======
Today is mostly review of old material in preparation of midterm on Monday.

Operators (and Precedence)
--------------------------
Some operators:

```c++
int x = 1;
int y = 2;
x *= y + (x+=3);


```


Conditionals
------------
Using `else if` : 

The following code
```c++
if (cond1){
   cout << "cond1 is true";
}else{
    if (cond2){
	    cout << "cond2 is true";
	}
}
```

is equivalent to

```c++
if (cond1){
    cout << "cond1 is true";
else if (cond2){
    cout << "cond2 is true";
}
```

but these are both different from

```c++
if (cond1){
   cout << "cond1 is true"; 
}
if (cond2){
   cout << "cond2 is true";
}
```

