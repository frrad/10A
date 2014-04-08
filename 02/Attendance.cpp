#include<iostream>

using namespace std;

/*
Question: Ask to use to input how many students are in class. Compute the
percent of students who attended class that day, and print result.
 */

/*
Strategy: First outline the program with comments, then fill in. Use contant for
class size instead of magic number.
 */

int main(){
  //Create a constant with total class size
  const int CLASS_SIZE = 35;

  //Create variable to store number of present students
  int present;

  //Get user input to assign value to variable
  cout << "Please input attendance #" << endl;
  cin >> present;

  //Calculate percent
  double percent = 100 * double(present) / double(CLASS_SIZE);

  //Output answer
  cout << "Percent present is " << percent << "%" << endl;
}
