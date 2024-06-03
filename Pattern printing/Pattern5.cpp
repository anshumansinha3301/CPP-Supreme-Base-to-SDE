#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            cout << "  "; // Print spaces
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << i << " "; // Print row number
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: Similar to the star pyramid, but instead of stars, the current row number is printed.
*/
