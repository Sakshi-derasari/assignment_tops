#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int c) {
    return c * c * c;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers to multiply: "; //input for multiplication
    cin >> num1 >> num2;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    cout << "Enter number to find its cube: "; // input for cube
    cin >> num1;
    cout << "Cube of " << num1 << " is: " << cube(num1) << endl;
}