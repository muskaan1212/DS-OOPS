#include <iostream>
using namespace std;

class Student {
    int marks[5];
    float total = 0;
    float average;
    char grade;

public:
    void inputMarks() {
        cout << "Enter marks for 5 subjects: ";
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        average = total / 5;
        if (average >= 90) grade = 'A';
        else if (average >= 80) grade = 'B';
        else if (average >= 70) grade = 'C';
        else if (average >= 60) grade = 'D';
        else grade = 'F';
    }

    void display() {
        cout << "Total: " << total << "\nAverage: " << average << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.inputMarks();
    s.calculate();
    s.display();
    return 0;
}
