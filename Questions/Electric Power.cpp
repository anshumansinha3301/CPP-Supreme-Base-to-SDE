#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    cout << "Enter voltage (in volts): ";
    cin >> voltage;
    cout << "Enter current (in amperes): ";
    cin >> current;
    power = voltage * current;
    cout << "Electric Power: " << power << " watts" << endl;
    return 0;
}
