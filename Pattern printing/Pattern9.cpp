#include <iostream>
using namespace std;
// butterfly pattern
int main() {
    int n = 5; // Number of rows for each wing
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for(int j = i; j < n; j++) {
            cout << "    "; // using double space of alignment purpose
        }
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for(int j = i; j < n; j++) {
            cout << "    "; 
        }
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Concept: The butterfly pattern has upper and lower parts with wings spreading out.
Nested loops handle the spaces and stars for symmetry in both parts.
*/
