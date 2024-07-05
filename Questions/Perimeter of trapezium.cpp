#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, perimeter;
    cout << "Enter the lengths of the four sides of the trapezium: ";
    cin >> a >> b >> c >> d;
    perimeter = a + b + c + d;
    cout << "Perimeter of the trapezium: " << perimeter << " units" << endl;
    return 0;
}
