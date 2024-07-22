#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float sum = 0.0, percentage;
    const int totalMarksPerSubject = 40;
    const int totalSubjects = 5;
    const int maxTotalMarks = totalMarksPerSubject * totalSubjects;

    cout << "Enter marks for 5 subjects (each out of 40):" << endl;
    for (int i = 0; i < totalSubjects; ++i) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    percentage = (sum / maxTotalMarks) * 100;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
