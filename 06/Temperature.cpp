#include <iostream>

using namespace std;

//Ask user for body temp, and display messages depending on if it is correct
int main(){
  cout << "What's the temperature";
  int temp;
  cin >> temp;
  cout << temp << endl;


 switch(temp){
 case(98):
   cout << "You're healthy!!" << endl;
   break;
 case 99:
   cout << "You have slight fever" << endl;
   break;
 case 97:
   cout << "You're too cold!" << endl;
   break;
 default:
   cout << "you're dead" << endl;
 }

  return 0;
}
