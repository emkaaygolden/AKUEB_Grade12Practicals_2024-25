#include <iostream>
#include <cmath>
using namespace std;

double cylinderVolume(double r, double h) 
	{ return M_PI * r * r * h; }
double sphereVolume(double r) 
	{ return (4.0 / 3.0) * M_PI * r * r * r; }
double cubeVolume(double a) 
	{ return a * a * a; }

int main() {
    cout << "Cylinder Volume: " << cylinderVolume(3, 5) << endl;
    cout << "Sphere Volume: " << sphereVolume(3) << endl;
    cout << "Cube Volume: " << cubeVolume(3) << endl;
    
    return 0;
}
