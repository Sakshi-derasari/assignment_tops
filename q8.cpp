#include <iostream>
using namespace std;
int operate(int a, int b) {
    return a + b;
}
float operate(float a, float b) {
    return a + b;
}
int operate(int a, int b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0;
}
float operate(float a, float b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0.0;
}

// Function to multiply two integers
int operate(int a, int b, bool multiply) {
    if (multiply) {
        return a * b;
    }
    return 0;
}
float operate(float a, float b, bool multiply) {
    if (multiply) {
        return a * b;
    }
    return 0.0;
}
float operate(int a, int b, double divide) {
    if (b != 0 && divide == 1.0) {
        return static_cast<float>(a) / b;
    }
    return 0.0;
}
float operate(float a, float b, double divide) {
    if (b != 0 && divide == 1.0) {
        return a / b;
    }
    return 0.0;
}

int main() {
    int a = 10, b = 5;
    float x = 10.5, y = 5.5;

    cout << "Addition of two integers: " << operate(a, b) << endl;
    cout << "Addition of two floats: " << operate(x, y) << endl;

    cout << "Subtraction of two integers: " << operate(a, b, '-') << endl;
    cout << "Subtraction of two floats: " << operate(x, y, '-') << endl;

    cout << "Multiplication of two integers: " << operate(a, b, true) << endl;
    cout << "Multiplication of two floats: " << operate(x, y, true) << endl;

    cout << "Division of two integers: " << operate(a, b, 1.0) << endl;
    cout << "Division of two floats: " << operate(x, y, 1.0) << endl;
}