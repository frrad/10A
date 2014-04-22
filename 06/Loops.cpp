#include<iostream>

using namespace std;

int main(){
  cout << "Example 1:" << endl;
  int i = 0;
  while (i < 10){
	cout << i << " ";
	i++;
  }
  cout << endl;

  cout << "Example 2:" << endl;
  i = 0;
  do{
	cout << i << " ";
	i++;
  }while (i < 10);
  cout << endl;

  cout << "Example 3:" << endl;
  i = 10;
  while (i < 10){
	cout << i << " ";
	i++;
  }
  cout << endl;

  cout << "Example 4:" << endl;
  i = 10;
  do{
	cout << i << " ";
	i++;
  }while (i < 10);
  cout << endl;
}
