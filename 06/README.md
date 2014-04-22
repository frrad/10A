Switch Statement
================

`while` vs `do-while`
---------------------
Here's a `while` loop:

```c++
int i = 0;
while (i < 10){
    cout << i << " ";
	i ++;
}
```

and a similar `do-while` loop:

```c++
int i = 0;
do{
    cout << i << " ";
	i ++;
}while (i < 10);
```

What are their outputs? What if we changed the starting value of `i`?

`switch`
--------

```c++
switch (x){
    case 1:
        cout << "x == 1";
		break;
	default:
		cout << "x != 1";
}
```

