#include <iostream>
using namespace std;

class Arithmetic {
    public:
    float num1, num2;

    public:
    Arithmetic(float a, float b) {
        num1 = a;
        num2 = b;
    }

    void get_details() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
         if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Error! Division by zero." << endl;
        }
    }
};

int main() {
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    Arithmetic arithmeticOperation(a, b);

    arithmeticOperation.get_details();
}
