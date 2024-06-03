#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // Infinite loop with break statement   
    while (true) {
        cout << i << " ";
        if (i >= 10) {
            break;
        }
        i++;
    }
    return 0;
}

// Questions:
// 1. What is the purpose of the `break` statement?
// 2. What would happen if we remove the `break` statement from the loop?
