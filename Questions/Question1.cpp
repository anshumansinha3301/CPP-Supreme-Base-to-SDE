// Write a C++ program to swap the values of two variables without using a third variable

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}
