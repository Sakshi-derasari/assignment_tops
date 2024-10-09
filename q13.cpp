#include <iostream>
using namespace std;

class Number {
private:
    int a, b;  // Private data members to store two numbers

public:
    // Constructor to initialize the numbers
    Number(int x, int y) {
        a = x;
        b = y;
    }

    // Friend function to find the maximum of two numbers
    friend int findMax(Number n);

    // Function to display the numbers
    void display() const {
        cout << "Number 1: " << a << ", Number 2: " << b << endl;
    }
};

// Friend function definition
int findMax(Number n) {
    // Compare two numbers and return the maximum
    if (n.a > n.b) {
        return n.a;
    } else {
        return n.b;
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Number object with the input values
    Number num(x, y);

    num.display();
    cout << "The maximum number is: " << findMax(num) << endl;
}