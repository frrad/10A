1. Write a C++ function

   ```c++
   void print_lines(int side_length)
   ```

   that draws a square of characters, where every fourth diagonal
   line (including the main diagonal) is made of stars.
   (Hint: if I know row,col, what condition tells me that the
   (row,col) cell should be a '*' character?)
   Examples for side lengths of 1,2,5 and 7 are below:

1:
```
*
```
2:
```
* 
 *
```
5:
```
*   *
 *   
  *  
   * 
*   *
```
7:
```
*   *  
 *   * 
  *   *
   *   
*   *  
 *   * 
  *   *
```
2. Write a C++ function that flips a coin.
   The return type should be a boolean: true for heads and false for tails.

3. Write a C++ function that returns a random double between 0 and 1.
   How would you modify the function to make it a random double between
   some x and some y?
   Hint: Look at Keith's code in the examples on CCLE.

4. Write a C++ function

   int sum_of_squares(int n)

   that returns the sum of the first n squares 1^2 + 2^2 + ... + n^2.

5. Mrs. Wormwood takes her class to the school's computer lab,
   for a lesson on functions. Calvin, ever the prankster,
   starts writing code for a video game where he hucks water balloons
   at people. Since 90% of the time his victim is Susie Derkins,
   he decides to make her the default target argument. He declares his water
   ballon function like this:

   void throw_water_balloon(string target="Susie Derkins", string balloon_color);

   As usual, Calvin should have been paying more attention in class. What is the
   problem with his code?

6. Explain why Keith's example of function overloading + default arguments
   causes problems:

   void print(int a);
   void print(int a, int b=2);

7. Here's a function where one parameter is pass by value, and the other is pass
   by reference. What will be printed when main() is run?

   void foo(int a, int& b) {
     a = a+b;
     b = 2a;
     cout << "a = " << a << ", b = " << b << endl;
   }

   int main() {
     int x = 1;
     int y = 2;
     foo(x,y);
     cout << "x = " << x << ", y = " << y << endl;
   }

8. Do you remember the ASCII value for the character 'A'? I sure don't. Write
   a line of C++ code that will tell me this ASCII value, *without* knowing
   the answer in advance. Pretend you have no internet connection and no
   reference materials, so you can't just look it up.
