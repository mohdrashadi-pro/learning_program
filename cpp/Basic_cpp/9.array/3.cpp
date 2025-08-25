#include <iostream>
using namespace std;

int main() {
    const int rows = 3;     // students
    const int cols = 4;     // subjects
    int grades[rows][cols];

    // Input grades
    for (int i = 0; i < rows; i++) {
        cout << "Enter grades for student " << (i + 1) << ": \n";
        for (int j = 0; j < cols; j++) {
            cout << "  Subject " << (j + 1) << ": ";
            cin >> grades[i][j];
        }
    }

    // Output grades
    cout << "\nGrades Table:\n";
    for (int i = 0; i < rows; i++) {
        cout << "Student " << (i + 1) << ": ";
        for (int j = 0; j < cols; j++) {
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}