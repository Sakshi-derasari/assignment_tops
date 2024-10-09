#include <iostream>
using namespace std;

class Student {
    protected:
    int rollNumber;

    public:
    void inputRollNumber() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student {
    protected:
    float subject1Marks, subject2Marks;

    public:
    void inputMarks() {
        cout << "Enter marks obtained in Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks obtained in Subject 2: ";
        cin >> subject2Marks;
    }

    void displayMarks() {
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

class Result : public Test {
    private:
    float totalMarks;

    public:
    void calculateTotal() {
        totalMarks = subject1Marks + subject2Marks;
    }
    void displayResult() {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.inputRollNumber();
    studentResult.inputMarks();
    studentResult.calculateTotal();

    cout << "\nStudent Result:\n";
    studentResult.displayResult();
}