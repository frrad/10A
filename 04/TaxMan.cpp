/*
Ask the user for his full name and SSN.
Print first initial, last name, and formatted SSN.

What's your name? Frederick Robinson
What's your SSN?  123456789

Print:
F. Robinson
123-45-6789
 */

#include<iostream>
#include<string>

using namespace std;

int main(){
  string name;
  while (name.find(" ",0) == std::string::npos){
	cout << "What's your name? ";
	getline(cin, name);
	if (name.find(" ",0) == std::string::npos){
	  cout << "Please enter both first and last name." << endl;
	}
  }

  string ssn;
  while (ssn.length()!=9){
	cout << "What's your SSN? ";
	//We can cin >> here since there shouldn't be space in SSN.
	cin >> ssn;
	if (ssn.length() != 9){
	  cout << "SSN should have 9 digits. Please try again." << endl;
	}
  }

  /*  int i = 0;
  while (i< name.length()){
	cout << name[i] << endl;
	i++;
	}*/

  //A space separates the first and last name, so the last name begins
  //immediately after " "

  int LNameStart = name.find(" ",0) + 1;
  int LNameLength = name.length() - LNameStart;

  cout << name[0] << ". " << name.substr(LNameStart, LNameLength)<< endl; 
  cout << ssn.substr(0,3) << "-" << ssn.substr(3,2) << "-" << ssn.substr(5,4) << endl;

  return 0;
}
