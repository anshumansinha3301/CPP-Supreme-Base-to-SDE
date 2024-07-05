#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of resistors in series: ";
    cin >> n;
    double resistance, totalResistance = 0.0;
    for (int i = 0; i < n; ++i) {
        cout << "Enter resistance of resistor " << i + 1 << ": ";
        cin >> resistance;
        totalResistance += resistance;
    }
    cout << "Total effective resistance: " << totalResistance << " ohms" << endl;
    return 0;
}
