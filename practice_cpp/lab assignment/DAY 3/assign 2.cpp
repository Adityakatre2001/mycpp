/*
Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape
and then create derived classes like Circle, Rectangle, and Triangle. Each shape should
have methods for calculating area and perimeter specific to its geometry.
*/
#include<iostream>
#include<cmath>
using namespace std;

class shape{
	
	virtual double area()const = 0;
	virtual double perimeter() const = 0;
};

class circle:virtual public shape{
	double r,pi = 3.14159265359;
	public:
	circle(double rad):r(rad){
	}
    double area()const override{
		//return pi*r*r;
		cout<<"Area of circle is : "<<pi*r*r<<endl;
	}
	double perimeter() const override{
		cout<<"Perimeter of circle is : "<<2*pi*r<<endl<<endl;
		cout<<"*********************************************"<<endl<<endl;
	}
};

class rectangle : public shape{
	double l,b;
	int a = 2;
	public:
	rectangle(double len,double bri):l(len),b(bri){
	}
	double area()const override{
		cout<<"Area of rectangle is : "<<l*b<<endl;
	}
	double perimeter() const override{
		cout<<"Perimeter of rectangle is : "<<2*(l*b)<<endl<<endl;
		cout<<"*********************************************"<<endl<<endl;
	}
};

class triangle : public shape{
	double s1,s2,s3;
	public:
		triangle(double ss1, double ss2, double ss3):s1(ss1),s2(ss2),s3(ss3){
		}
	double area()const override{
		double s = (s1+s2+s3)/2;
//		 = s*(s-s1)*(s-s2)*(s-s3);
		cout<<"Area of triangle is: "<<sqrt(s*(s-s1)*(s-s2)*(s-s3))<<endl;
	}
	double perimeter()const override{
		cout<<"Perimeter of Triangle is : "<<s1+s2+s3<<endl;
	}
};


int main()
{
	int choice;
	cout<<"Enter 1 for area and perimeter of circle "<<endl;
	cout<<"Enter 2 for area and perimeter of rectangle "<<endl;
	cout<<"Enter 3 for area and perimeter of Triangle : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			float r;
			cout<<"Enter Radius of circle : ";
			cin>>r;
			circle c(r);
			c.area();
			c.perimeter();
			break;
		case 2:
			float l,w;
			cout<<"Enter Length of Rectangle : ";
			cin>>l;
			cout<<"Enter width of Rectangle : ";
			cin>>w;
			rectangle rec(l,w);
			rec.area();
			rec.perimeter();
			break;
		case 3:
			float s1,s2,s3;
			cout<<"Enter first side of Triangle : ";
			cin>>s1;
			cout<<"Enter second side of Trianngle : ";
			cin>>s2;
			cout<<"Enter Third side of Triangle : ";
			cin>>s3;
			triangle tri(s1,s2,s3);
			tri.area();
			tri.perimeter();
			break;
		default:
			cout<<"Invalid Input";
}
	return 0;
}
