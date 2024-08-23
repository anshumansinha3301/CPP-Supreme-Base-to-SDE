#include <iostream>
using namespace std;

class Shape {
public:
    double radius;
    double length;
    double width;

    // Function to calculate the perimeter of a rectangle
    double calculateRectanglePerimeter() {
        return 2 * (length + width);
    }

    // Function to calculate the perimeter of a circle
    double calculateCirclePerimeter() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Shape shape;

    // Set dimensions for the shape
    shape.radius = 5.0;
    shape.length = 10.0;
    shape.width = 4.0;

    // Display the perimeter of the rectangle
    cout << "Rectangle Perimeter: " << shape.calculateRectanglePerimeter() << endl;

    // Display the perimeter of the circle
    cout << "Circle Perimeter: " << shape.calculateCirclePerimeter() << endl;

    return 0;
}
