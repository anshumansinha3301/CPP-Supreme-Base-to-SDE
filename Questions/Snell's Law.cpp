#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double n1, n2, angle1, angle2;
    cout << "Enter refractive index of first medium: ";
    cin >> n1;
    cout << "Enter refractive index of second medium: ";
    cin >> n2;
    cout << "Enter angle of incidence (in degrees): ";
    cin >> angle1;
    angle1 = angle1 * M_PI / 180.0; // convert to radians
    angle2 = asin((n1 / n2) * sin(angle1));
    angle2 = angle2 * 180.0 / M_PI; // convert to degrees
    cout << "Angle of refraction: " << angle2 << " degrees" << endl;
    return 0;
}
