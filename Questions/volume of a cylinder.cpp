#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.14159265358979323846;
    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;
    volume = PI * radius * radius * height;
    cout << "Volume of the cylinder: " << volume << " cubic units" << endl;
    return 0;
}
