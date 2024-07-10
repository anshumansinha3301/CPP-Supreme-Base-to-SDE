#include <iostream>
using namespace std;
     
int main() {
    int a, d, n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common difference (d): ";
    cin >> d;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << a + i * d << " ";
    }
    cout << endl;
    return 0;
}
