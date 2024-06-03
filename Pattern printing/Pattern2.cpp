#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: Similar to the simple triangle, but the outer loop starts from 'n' and decrements.
This prints a reverse triangle pattern.
*/
