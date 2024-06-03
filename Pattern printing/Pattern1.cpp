#include <iostream>
using namespace std;
// triangle
int main() {
    int n = 5; // Number of rows
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: Nested loops are used to print a simple triangle pattern. 
The outer loop controls the number of rows, and the inner loop controls 
the number of stars to be printed in each row.
*/
