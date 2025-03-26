#include <iostream>
using namespace std;

int main() {
	
    int num = 10;
   
    if (num > 5)
        cout << "Number is greater than 5\n";
 
    if (num > 5 && num < 15)
        cout << "Number is between 5 and 15\n";
  
    else if (num > 15)
        cout << "Number is greater than 15\n";
   
    else
        cout << "Number is less than or equal to 5\n";
    
	return 0;
}

