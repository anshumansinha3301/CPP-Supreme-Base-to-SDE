#include <iostream>
using namespace std;

int main() {
    double mass, height, potentialEnergy;
    const double g = 9.81; // acceleration due to gravity in m/s^2
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter height (in meters): ";
    cin >> height;
    potentialEnergy = mass * g * height;
    cout << "Gravitational Potential Energy: " << potentialEnergy << " joules" << endl;
    return 0;
}
