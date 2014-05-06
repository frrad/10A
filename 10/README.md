`<cmath>`
=========

There are a _lot_ of useful math functions in the cmath library. For instance:

`log` `log10` `exp` `sin` `cos` `tan` `pow` `fabs` `ceil` `floor`

Here's a trick for rounding using math library functions:

```c++
// Nearest integer
floor(x + .5);
// tenth
floor(x * 10 + .5) / 10.0;
// hundredth
floor(x * 100 + .5) / 100.0;
```

Function Tricks/Tips
====================

If you declare a function with `inline` the compiler will inline it at compile time.

You can give function arguments default values:

```c++
int intExp(int x, int a=2){
	if (a==1)
	   return x;

    if (a%2==0)
	   return intExp(x,a/2)*intExp(x,a/2);

    return intExp(x,a/2)*intExp(x,a/2) * x;
}

intExp(5); //25
```

You can overload functions too!

```c++
int twice(int x){
    return x*2;
}

double twice(double x){
	return x*2;
}
```