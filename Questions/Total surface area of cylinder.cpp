#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, height, totalSurfaceArea;
    const double PI = 3.14159265358979323846;
    cout << "Enter radius of the base of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;
    totalSurfaceArea = 2 * PI * radius * (radius + height);
    cout << "Total Surface Area of the cylinder: " << totalSurfaceArea << " square units" << endl;
    return 0;
}
