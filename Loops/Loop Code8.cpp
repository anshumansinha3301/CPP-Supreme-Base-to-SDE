#include <iostream>
using namespace std;
// for loop with array
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Loop through the array elements
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// Questions:
// 1. How can you modify the loop to print the array in reverse order?
// 2. What will happen if we access an element beyond the array size?
