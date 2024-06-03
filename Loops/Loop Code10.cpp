#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 10, 15, 20, 25};

    // Range-based for loop to print vector elements
    for (int value : vec) {
        cout << value << " ";
    }
    return 0;
}

// Questions:
// 1. What are the advantages of using a range-based for loop?
// 2. How can you modify the loop to print the square of each element?
