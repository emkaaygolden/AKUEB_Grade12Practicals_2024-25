#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    int* ptr = &x;
    
	cout << "Pointer points to x: " << *ptr << endl;
    ptr = &y;
    cout << "Pointer now points to y: " << *ptr << endl;
    
	return 0;
}
