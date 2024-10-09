#include <iostream>
using namespace std;

class Shape {
    public:
    float area(float length, float breadth) {
        return length * breadth;  // Rectangle: Area = length * breadth
    }

    float area(float base, float height, bool isTriangle) {
        return 0.5 * base * height;  // Triangle: Area = ½ * base * height
    }

    float area(float radius) {
        const float Pi = 3.14159;
        return Pi * radius * radius;  // Circle: Area = Pi * radius^2
    }
};

int main() {
    Shape shape;
    float length, breadth, base, height, radius;

    // Calculate area of rectangle
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << shape.area(length, breadth) << endl;

    // Calculate area of triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << shape.area(base, height, true) << endl;

    // Calculate area of circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << shape.area(radius) << endl;
}