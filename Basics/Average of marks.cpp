#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float sum = 0.0, average;

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    average = sum / 5;
    cout << "Average marks: " << average << endl;

    return 0;
}
