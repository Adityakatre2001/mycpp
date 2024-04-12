//3:Create a abstract class Shape with pure virtual method area;
//Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
//Test these all classes by creating object of respective class.
#include<iostream>
using namespace std;

class shape{
		
	virtual float area () const=0;
	
};
	class Rectangle : public shape{
		float length,breadth;
		public:
		Rectangle(float length,float breadth):length(length),breadth(breadth){
		}
		float area () const override{
			return length*breadth;
		}
		
	};
	
	class Circle : public shape{
		float radius;
		public:
		Circle(float radius,float pi=3.14) : radius(radius){
}
		    float area () const override{
			return 3.14*radius*radius;
		}

	};
	
	class Square : public shape{
		float side;
		public:
		Square(float side):side(side){
		}
		float area () const override{
			return side*side;
		}
		
	};
	
	
	int main()
	{
		Rectangle Rec(10,10);
		Circle cir(12);
		Square sqc(10);
		cout<<"Area of Rectangle is : "<<Rec.area()<<endl;
		cout<<"Area of Circle is : "<<cir.area()<<endl;
		cout<<"Area of square is : "<<sqc.area()<<endl;
		return 0;
	}

