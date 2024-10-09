#include <iostream>
using namespace std;
class Number {
    private:
    int a, b;  

    public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void swapNumbers(Number &n);

    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Friend function to swap the values of two numbers
void swapNumbers(Number &n) {
    n.a = n.a + n.b;  // a = a + b
    n.b = n.a - n.b;  // b = (a + b) - b = a
    n.a = n.a - n.b;  // a = (a + b) - a = b
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Number object
    Number num(x, y);

    cout << "Before swapping: ";
    num.display();

    swapNumbers(num);

    cout << "After swapping: ";
    num.display();

}