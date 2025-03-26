#include <iostream>
using namespace std;

class MyClass {
    int a, b;

public:
    void setValues(int x, int y) { a = x; b = y; }
    void display() { cout << "a: " << a << ", b: " << b << endl; }
};

int main() {
    MyClass obj;
    obj.setValues(5, 10);
    obj.display();

    return 0;
}
