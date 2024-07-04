#include <iostream>
using namespace std;

int main() {
    double V, I, R;
    cout << "Enter voltage (V): ";
    cin >> V;
    cout << "Enter current (I): ";
    cin >> I;
    R = V / I;
    cout << "Resistance (R): " << R << " ohms" << endl;
    return 0;
}
