#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the lengths of the two shorter sides of the triangle: ";
    cin >> a >> b;
    c = sqrt(a*a + b*b);
    cout << "The length of the hypotenuse is: " << c << endl;
    return 0;
}
