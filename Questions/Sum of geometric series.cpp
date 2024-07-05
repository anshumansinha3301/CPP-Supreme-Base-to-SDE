#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, r;
    int n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common ratio (r): ";
    cin >> r;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    double sum;
    if (r != 1) {
        sum = a * (1 - pow(r, n)) / (1 - r);
    } else {
        sum = a * n;
    }
    cout << "Sum of the geometric series: " << sum << endl;
    return 0;
}
