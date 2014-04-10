//Today we'll talk a bit about logic
//and do some examples, using the ternary operator

#include<iostream>

using namespace std;

int main(){
  /*
  //Experimentation with logic operators
  bool x,y;
  x = true;
  y = false;

  if(x && y)
	{
	  cout << "condition is true" << endl;
	}else{
	cout << "condition is not true" << endl;
	}
  */


  //Question: How do you round a float?
  float x;
  cout << "What number should I round" << endl;
  cin >> x;

  int truncated = int(x);

  /*
  //Method 1: Use if statement
  if (x - truncated < .5){
	cout << truncated << endl;
  }else{
	cout << truncated +1 << endl;
  }	
  */

  //Method 2: Ternary operator
  int rounded = (x - truncated < .5? truncated : truncated+1);
  cout << rounded << endl;

  return 0;
}
