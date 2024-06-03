/*
Question: Write a program to print the Fibonacci series up to n terms.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int t1 = 0, t2 = 1;
    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 3; i <= n; i++) {
        int nextTerm = t1 + t2; // Calculate the next term
        cout << ", " << nextTerm;
        t1 = t2; // Update t1 and t2 for next iteration
        t2 = nextTerm;
    }
    cout << endl;
    return 0;
}

/*
Explanation: 
- The program reads an integer n from the user.
- It initializes the first two terms of the Fibonacci series as t1 and t2.
- A for loop iterates from 3 to n, calculating the next term as the sum of t1 and t2.
- Each next term is printed, and t1 and t2 are updated for the next iteration.
- Finally, the program prints the entire Fibonacci series up to n terms.
*/
