#include <iostream>
#include <cmath>
using namespace std;
       
int main() {
    double q1, q2, r, F;
    const double k = 8.9875e9;
    cout << "Enter charge q1 (in coulombs): ";
    cin >> q1;
    cout << "Enter charge q2 (in coulombs): ";
    cin >> q2;
    cout << "Enter distance between charges (in meters): ";
    cin >> r;
    F = k * q1 * q2 / (r * r);
    cout << "Force between the charges: " << F << " N" << endl;
    return 0;
}  
