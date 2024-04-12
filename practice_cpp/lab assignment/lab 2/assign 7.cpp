/*
7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
*/

#include<iostream>
using namespace std;

int main()
{
	int choice;
	do{
	cout<<"********************************************"<<endl<<endl;
	cout<<"\nEnter 1 to Compute area of circle"<<endl;
	cout<<"Enter 2 to Compute area of rectangle"<<endl;
	cout<<"Enter 3 to Compute area of triangle : "<<endl;
	cout<<"Enter 4 to Exit : ";
	cin>>choice;
	

	switch(choice){
		case 1:
			float r;
			cout<<"\nEnter a Radius of circle : ";
			cin>>r;
			cout<<"\nArea of circle is : "<<3.14*r*r<<endl<<endl;
			break;
			
		case 2:
			float l,w;
			cout<<"\nEnter length of rectangle : ";
			cin>>l;
			cout<<"Enter width of rectangle : ";
			cin>>w;
			cout<<"\nArea of Rectangle is : "<<l*w<<endl<<endl;
			break;
		case 3:
			float h,b;
			cout<<"\nEnter Height of Triangle : ";
			cin>>h;
			cout<<"Enter breadth of Triangle : ";
			cin>>b;
			cout<<"\nArea of Triangle is : "<<0.5*h*b<<endl<<endl;
			break;
		case 4:
			cout<<"Exiting program ";
			break;
		default:
			cout<<"Invalid Input "<<endl<<endl;
			break;
		
}}while(choice!=4 || choice>4);

}
