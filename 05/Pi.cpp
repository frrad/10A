#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
  int odd = 1;
  float pi;

  while (odd <= 1000000){
	int term = odd;
	if ( term % 4 == 3){
	  term *= -1;
	}

	pi += 4. / term;
	cout << setprecision(10) << fixed;
	cout << "pi=" << pi << "\tterm=" << 4./term <<endl;

	odd += 2;
  }


  return 0;
}
