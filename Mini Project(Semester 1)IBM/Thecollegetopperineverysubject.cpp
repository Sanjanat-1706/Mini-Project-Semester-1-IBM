#include <iostream>
using namespace std;

int main() {
    int marks[5][3];
    int i, j;

    cout << "Enter marks of 5 students in 3 subjects:\n";

    for (i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }
    }

    int highest[3] = {0, 0, 0};

    for (j = 0; j < 3; j++) {
        highest[j] = marks[0][j]; 
        for (i = 1; i < 5; i++) {
            if (marks[i][j] > highest[j]) {
                highest[j] = marks[i][j];
            }
        }
    }

    cout << "\nHighest marks in Mathematics: " << highest[0];
    cout << "\nHighest marks in Physics: " << highest[1];
    cout << "\nHighest marks in Computer Science: " << highest[2] << endl;

    return 0;
}
