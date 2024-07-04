#include <iostream>
using namespace std;

int main() {
    double mass, velocity, kineticEnergy;
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter velocity (in m/s): ";
    cin >> velocity;
    kineticEnergy = 0.5 * mass * velocity * velocity;
    cout << "Kinetic Energy: " << kineticEnergy << " joules" << endl;
    return 0;
}
