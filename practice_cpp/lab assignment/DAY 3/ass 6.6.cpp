#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;
class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius)
	{
		this->radius=radius;
	}
    double area()  {
        return 3.14159 * radius * radius;
    }

    double perimeter()  {
        return 2 * 3.14159 * radius;
    }
};
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double length, double width)  {
    	this->length=length;
    	this->width=width;
	}
    double area()  {
        return length * width;
    }
    double perimeter()  {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double side1, double side2, double side3)
	{
	  this->side1=side1;
	  this->side2=side2;
	  this->side3=side3;
	}
    double area()  {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter()  {
        return side1 + side2 + side3;
    }
};
int main() {
    Shape* shapes[] = {
        new Circle(8),
        new Rectangle(7, 8),
        new Triangle(6,8,5)
    };
    for (int i = 0; i < 3; i++) {
        cout << "Shape " << i + 1 << " - Area: " << shapes[i]->area() << ",       Perimeter: " << shapes[i]->perimeter() << endl;
    }
    return 0;
}

