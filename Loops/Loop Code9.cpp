#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // Loop through the vector elements
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}

// Questions:
// 1. How can you use a range-based for loop to iterate through the vector?
// 2. Modify the loop to print only elements greater than 20.
