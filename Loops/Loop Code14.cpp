/*
Question: Write a program to check whether a given number is prime.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    if (n <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false; // If n is divisible by any number other than 1 and itself, it is not prime
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

/*
Explanation: 
- The program reads an integer n from the user.
- If n is less than or equal to 1, it is not prime.
- A for loop iterates from 2 to n/2, checking if n is divisible by any number in this range.
- If a divisor is found, n is not prime.
- Finally, the program prints whether n is prime or not.
*/
