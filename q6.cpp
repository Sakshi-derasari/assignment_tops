#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
    string name;
    int age;
    public:
    void inputPersonData() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
    protected:
    float percentage;
    public:
    void inputStudentData() {
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudentData() {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : virtual public Person {
    protected:
    float salary;

    public:
    void inputTeacherData() {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        cout << "Salary: " << salary << endl;
    }
};

// Derived class WorkingStudent using multiple inheritance
class WorkingStudent : public Student, public Teacher {
public:
    void inputData() {
        inputPersonData();
        inputStudentData();
        inputTeacherData();
    }

    void displayData() {
        displayPersonData();
        displayStudentData();
        displayTeacherData();
    }
};

int main() {
    WorkingStudent ws;

    cout << "Enter details of the Working Student:" << endl;
    ws.inputData();

    cout << "\nDetails of the Working Student:" << endl;
    ws.displayData();
}