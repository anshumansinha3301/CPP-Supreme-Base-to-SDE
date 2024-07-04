#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent, result;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    result = pow(base, exponent);
    cout << "Result: " << result << endl;
    return 0;
}
