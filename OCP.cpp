#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double radius)
        : radius(radius) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    double width;
    double height;

public:
    Rectangle(double width, double height)
        : width(width), height(height) {}

    double area() override {
        return width * height;
    }
};

class AreaCalculator {
public:
    double calculateArea(Shape** shapes, int count) {
        double totalArea = 0.0;
        for (int i = 0; i < count; ++i) {
            totalArea += shapes[i]->area();
        }
        return totalArea;
    }
};

int main() {
    return 0;
}
