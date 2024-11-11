#include <iostream>
using namespace std;

void swapWithThirdVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping (with 3rd variable): a = " << a << ", b = " << b << endl;
    swapWithThirdVar(a, b);
    cout << "After swapping (with 3rd variable): a = " << a << ", b = " << b << endl;
    return 0;
}
