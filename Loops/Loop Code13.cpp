/*
Question: Write a program to print the multiplication table of a given number up to 10.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl; // Printing the product of n and i
    }
    return 0;
}

/*
Explanation: 
- The program reads an integer n from the user.
- A for loop iterates from 1 to 10, printing the product of n and each i.
- Each iteration prints one line of the multiplication table.
*/
