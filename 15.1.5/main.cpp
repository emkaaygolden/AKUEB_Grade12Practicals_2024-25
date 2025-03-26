#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    
    cout << "Address of x: " << ptr << endl;
  
    return 0;
}
