#include <iostream>
using namespace std;
  
int main() {
    double inputEnergy, outputEnergy, efficiency;
    cout << "Enter input energy (in joules): ";
    cin >> inputEnergy;
    cout << "Enter output energy (in joules): ";
    cin >> outputEnergy;
    efficiency = (outputEnergy / inputEnergy) * 100;
    cout << "Efficiency of the machine: " << efficiency << "%" << endl;
    return 0;
}
