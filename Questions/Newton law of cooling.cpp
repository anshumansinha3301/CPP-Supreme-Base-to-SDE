#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double T, T0, T_env, k, t;
    cout << "Enter initial temperature (T0): ";
    cin >> T0;
    cout << "Enter surrounding temperature (T_env): ";
    cin >> T_env;
    cout << "Enter time (t) in minutes: ";
    cin >> t;
    cout << "Enter cooling constant (k): ";
    cin >> k;
    T = T_env + (T0 - T_env) * exp(-k * t);
    cout << "Temperature after " << t << " minutes: " << T << "°C" << endl;
    return 0;
}
