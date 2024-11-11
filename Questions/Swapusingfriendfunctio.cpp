#include <iostream>
using namespace std;

class Swapper {
private:
    int a, b;

public:
    Swapper(int x, int y) : a(x), b(y) {}

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    friend void swapUsingFriend(Swapper &s);
};

void swapUsingFriend(Swapper &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    Swapper s(5, 10);
    cout << "Before swapping (using friend function): ";
    s.display();
    swapUsingFriend(s);
    cout << "After swapping (using friend function): ";
    s.display();
    return 0;
}
