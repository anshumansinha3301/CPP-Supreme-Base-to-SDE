#include <iostream>
using namespace std;
 
int main() {
    int n = 9; // Width of the pattern
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= n; j++) {
            if(((i+j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

/* 
Concept: The zig-zag pattern is created by checking conditions to print stars at specific positions.
The modulo operation helps in creating the zig-zag effect.
*/
