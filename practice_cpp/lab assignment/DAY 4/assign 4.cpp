/*

4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write
getters and setters for all the data members. Also add the display function. Create the object of this
class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;
class point{
	float x,y;
	public:
		point(){
			x = 1;
			y = 1;
		}
		point(float x,float y):x(x),y(y){
		}
		
		float getx()const{
			return x;
		}
		void setx(float xx){
			x = xx;
		}
		
		float gety()const{
			return y;
		}
		
		void sety(float yy){
			y = yy;
		}
		
		void display(){
			cout<<"Value of X is : "<<x<<endl<<"Value of Y is : "<<y<<endl<<endl;
			cout<<"********************************************"<<endl<<endl;
		}
};

int main()
{
	point p(45,65);
	p.display();
	p.setx(55);
	p.sety(66);
	p.display();
}


