#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}

    double area() const  {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double length, double width) : length(length), width(width) {}
    double area() const override {
        return length * width;
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

bool compareShapesByArea(const Shape* shape1, const Shape* shape2) {
    return shape1->area() < shape2->area();
}
int main() {
    Circle circle(9);
    Rectangle rectangle(7, 6);
    Triangle triangle(6, 8, 10);
    Shape* shapes[] = {&circle, &rectangle, &triangle};
    int size = sizeof(shapes) / sizeof(shapes[0]);
   sort(shapes, shapes + size, compareShapesByArea);
    for (int i = 0; i < size; i++) {
        cout << "Shape " << i + 1 << ": Area = " << shapes[i]->area() << ", Perimeter = " << shapes[i]->perimeter() << endl;
    }
    return 0;
}

