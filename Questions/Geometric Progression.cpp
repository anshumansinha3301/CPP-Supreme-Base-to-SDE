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
    for (int i = 0; i < n; ++i) {
        cout << a * pow(r, i) << " ";
    }
    cout << endl;
    return 0;
}
