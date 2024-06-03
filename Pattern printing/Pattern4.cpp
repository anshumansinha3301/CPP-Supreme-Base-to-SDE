#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows for the upper part
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            cout << "  "; // Print spaces
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--) {
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
Concept: The diamond pattern combines an upper and lower pyramid.
Two sets of nested loops handle the upper and lower parts of the diamond.
*/
