#include <iostream>
using namespace std;
// implementation of continue statement
int main() {
    // Using continue statement to skip even numbers
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop for even numbers
        }
        cout << i << " ";
    }
    return 0;
}

// Questions:
// 1. What will be the output of this program?
// 2. Modify the loop to skip odd numbers instead.
