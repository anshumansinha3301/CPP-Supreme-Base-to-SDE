#include <iostream>
using namespace std;
// floyd triangle
int main() {
    int n = 5; // Number of rows
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: Floyd's triangle uses a single number sequence in a triangular format.
The number increments with each step inside the inner loop.
*/
