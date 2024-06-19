#include <iostream>
using namespace std;
// Hourglass pattern
int main() {
    int n = 5; // Number of rows for the upper part    
    for(int i = n; i >= 1; i--) {
        for(int j = n; j > i; j--) {
            cout << "  "; // Print spaces
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 2; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << "  "; // Print spaces
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: The hourglass pattern combines an inverted and a normal pyramid.
The two sets of nested loops manage the upper and lower parts respectively.
*/
