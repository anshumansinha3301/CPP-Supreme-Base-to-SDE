#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double mass, radius, escapeVelocity;
    const double G = 6.67430e-11; // gravitational constant in m^3 kg^-1 s^-2
    cout << "Enter mass of the celestial body (in kg): ";
    cin >> mass;
    cout << "Enter radius of the celestial body (in meters): ";
    cin >> radius;
    escapeVelocity = sqrt((2 * G * mass) / radius);
    cout << "Escape Velocity: " << escapeVelocity << " m/s" << endl;
    return 0;
}
