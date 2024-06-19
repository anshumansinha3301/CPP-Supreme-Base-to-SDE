// Write a C++ program to find the average of n numbers. 
 
#include <iostream>
using namespace std;
 
int main() {
    int n;
    float sum = 0.0, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Average: " << sum / n << endl;
    return 0;
}
