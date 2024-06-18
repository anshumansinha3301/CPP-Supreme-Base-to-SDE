// Write a C++ program to calculate the grade of a student based on marks obtained in 5 subjects.
  
#include <iostream>
using namespace std;

int main() {
    float marks[5], sum = 0, average;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; ++i) {
        cin >> marks[i];
        sum += marks[i];
    }
    average = sum / 5;
    cout << "Average: " << average << endl;
    if (average >= 90)
        cout << "Grade: A" << endl;
    else if (average >= 80)
        cout << "Grade: B" << endl;
    else if (average >= 70)
        cout << "Grade: C" << endl;
    else if (average >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
    return 0;
}
