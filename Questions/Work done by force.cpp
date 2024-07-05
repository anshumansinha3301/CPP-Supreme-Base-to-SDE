#include <iostream>
using namespace std;

int main() {
    double force, distance, workDone;
    cout << "Enter force (in newtons): ";
    cin >> force;
    cout << "Enter distance (in meters): ";
    cin >> distance;
    workDone = force * distance;
    cout << "Work done: " << workDone << " joules" << endl;
    return 0;
}
