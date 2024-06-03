/*
Question: Write a program to calculate the factorial of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiplying each number to factorial
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}

/*
Explanation: 
- The program reads an integer n from the user.
- A for loop iterates from 1 to n, multiplying each number to the variable factorial.
- Finally, the program prints the factorial.
*/
