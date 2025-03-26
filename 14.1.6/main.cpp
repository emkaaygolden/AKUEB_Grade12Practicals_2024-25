#include <iostream>
using namespace std;

double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

double areaOfParallelogram(double base, double height) {
    return base * height;
}

int main() {
    cout << "Area of Circle: " << areaOfCircle(7) << endl;
    cout << "Area of Triangle: " << areaOfTriangle(5, 10) << endl;
    cout << "Area of Parallelogram: " << areaOfParallelogram(4, 8) << endl;
    return 0;
}
