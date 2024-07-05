#include <iostream>
using namespace std;

int main() {
    double v1, v2, relativeVelocity;
    cout << "Enter velocity of object 1 (in m/s): ";
    cin >> v1;
    cout << "Enter velocity of object 2 (in m/s): ";
    cin >> v2;
    relativeVelocity = v1 - v2;
    cout << "Relative Velocity: " << relativeVelocity << " m/s" << endl;
    return 0;
}
