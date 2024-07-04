#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double value;
        cout << "Enter value " << i+1 << ": ";
        cin >> value;
        sum += 1.0 / value;
    }
    double harmonicMean = n / sum;
    cout << "Harmonic Mean: " << harmonicMean << endl;
    return 0;
}
