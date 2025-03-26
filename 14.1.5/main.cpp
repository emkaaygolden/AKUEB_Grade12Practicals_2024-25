#include <iostream>
using namespace std;

void arithmeticOperations(int a, int b) {
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
}

int main() {
    int num1 = 10, num2 = 5;
    arithmeticOperations(num1, num2);
    return 0;
}
