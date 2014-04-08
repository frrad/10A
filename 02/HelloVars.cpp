#include<iostream>

using namespace std;

/*
Question: I owe my brother 12.37, but have only quarters with which to repay
him. How much can I pay him? How much will I owe him after paying him back as
much as I can?
 */

int main()
{
  const int QUARTERVALUE = 25;
  
  int centsOwed = 1237;

  cout << "First I owe " << centsOwed << " cents" << endl;

  //Compute how many quarters I can pay
  int quarters = centsOwed / QUARTERVALUE;

  cout << "Then I pay him " << quarters << " quarters"<< endl;

  //Now compute how much I still owe.

  //centsOwed = centsOwed % QUARTERVALUE;
  centsOwed %= QUARTERVALUE; //this is shorthand for the above

  cout << "Now I owe only " << centsOwed << " cents" << endl;
}
