//Ask user for temperature. Print if it is nice or not

#include<iostream>

using namespace std;

int main(){
  //Ask user for temp
  cout << "What's the temperature?";
  int temp;
  cin >> temp;

  const int TOOHOT = 90;
  const int TOOCOLD = 50;

  //decide if it's nice or not
  bool hot = (temp >= TOOHOT);
  bool cold = (temp <= TOOCOLD);

  //cout << "too hot:" <<  hot << endl; 
  //cout << "too cold:" <<  cold << endl;

  //Print the answer!
  if (!hot && !cold){
	cout << "The weather is nice" << endl;
  }else{
	cout << "The weather is bad" << endl;
	if (hot)
	  {
		cout << "It's too hot!!" << endl;
	  }
	if (cold)
	  {
		cout << "It's too cold!!" << endl;
	  }
  }


  return 0;
}
