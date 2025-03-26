#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

public:
    int publicVar;
    MyClass() : privateVar(10), publicVar(20) {}
    void display() { cout << "Private: " << privateVar << ", Public: " << publicVar << endl; }
};

int main() {
    MyClass obj;
    obj.display();
    obj.publicVar = 50;
    cout << "Updated Public: " << obj.publicVar << endl;

    return 0;
}
