#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, slantHeight, lateralSurfaceArea;
    const double PI = 3.14159265358979323846;
    cout << "Enter radius of the base of the cone: ";
    cin >> radius;
    cout << "Enter slant height of the cone: ";
    cin >> slantHeight;
    lateralSurfaceArea = PI * radius * slantHeight;
    cout << "Lateral Surface Area of the cone: " << lateralSurfaceArea << " square units" << endl;
    return 0;
}
