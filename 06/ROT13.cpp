//encode a string using ROT13
#include<string>
#include<iostream>

using namespace std;

int main(){
cout << "What would you like to encrypt?" <<endl;
string clearText;
cin >> clearText;
 cout << "Cleartext: " << clearText << endl;
 int i = 0;

 string cipherText = "";
 while (i < clearText.length()){
   int   letterCode = static_cast<int>(clearText[i])-96;
   int codeLetter = (letterCode + 13) % 26;
   if( codeLetter == 0) { codeLetter = 26;}
   //cout << letterCode <<  " = " << codeLetter << endl;
   cipherText +=  static_cast<char>(codeLetter + 96);
   i++;
 }

 cout << "Ciphertext: " << cipherText << endl;
 return 0;
}

//Further questions: 
//1: Try finding codeLetter using the ternary operator?
//2: What if you want to handle spaces too?
//3: Try to decrypt this: "gurdhvpxoebjasbkwhzcfbiregurynmlqbt"
//4: What happens if you use try to encrypt upper case letters? Punctuation?
