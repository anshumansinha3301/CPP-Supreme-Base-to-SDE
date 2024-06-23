#include <iostream>
using namespace std;
// pascal triangle
int main() {
    int n = 5; // Number of rows   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            int value = 1;
            for(int k = 0; k < j; k++) {
                value = value * (i - k) / (k + 1);
            }
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}

/* 
Concept: Pascal's triangle is generated using combinations.
Each element is calculated as a combination of row and column indices.
*/   
