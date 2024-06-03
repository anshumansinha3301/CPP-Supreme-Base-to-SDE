#include <iostream>
using namespace std;
// pyramid
int main() {
    int n = 5; // Number of rows
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            cout << "  "; 
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: The pyramid pattern requires managing spaces before the stars.
The first inner loop prints spaces, and the second inner loop prints stars.
*/
