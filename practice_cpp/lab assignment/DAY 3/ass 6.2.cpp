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
            circle c(5);
			c.area();
			c.perimeter();
			rectangle rec(10,10);
			rec.area();
			rec.perimeter();
			triangle tri(10,10,10);
			tri.area();
			tri.perimeter();
}
