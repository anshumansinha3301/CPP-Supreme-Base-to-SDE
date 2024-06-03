/*
Question: Write a program to calculate the sum of the first n natural numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // Adding each number to sum
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}

/*
Explanation: 
- The program reads an integer n from the user.
- A for loop iterates from 1 to n, adding each number to the variable sum.
- Finally, the program prints the sum.
*/
