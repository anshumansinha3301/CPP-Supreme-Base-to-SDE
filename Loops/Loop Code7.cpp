#include <iostream>
using namespace std;
// loop with user input
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Loop to print all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}

// Questions:
// 1. What happens if the user enters a negative number?
// 2. Modify the program to print numbers from n to 1.
