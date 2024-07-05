#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double velocity, angle, range;
    const double g = 9.81; // acceleration due to gravity in m/s^2
    cout << "Enter the initial velocity (in m/s): ";
    cin >> velocity;
    cout << "Enter the angle of projection (in degrees): ";
    cin >> angle;
    angle = angle * M_PI / 180.0; // convert angle to radians
    range = (velocity * velocity * sin(2 * angle)) / g;
    cout << "Range of the projectile: " << range << " meters" << endl;
    return 0;
}
