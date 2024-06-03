#include <iostream>
using namespace std;

// Nested for loop implementation     
int main() {
    // Nested for loop to print a 5x5 matrix of asterisks
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// Questions:
// 1. Modify the loop to print a triangular pattern of asterisks.
// 2. How can you change the program to print a 10x10 matrix?
