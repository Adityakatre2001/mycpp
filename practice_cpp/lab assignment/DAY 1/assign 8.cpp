//8. Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main()
{
	float a1,a2,a3,tri;
	int i;
	do{

	cout<<"Enter first angle : ";
	cin>>a1;
	cout<<"Enter second angle : ";
	cin>>a2;
	cout<<"Enter third angle : ";
	cin>>a3;
	tri = (a1 + a2 + a3);
	if(tri<180 && tri>0)
		cout<<"Entered angles of a triangle are valid "<<endl<<endl;
	else
		cout<<"Invalid triangle"<<endl<<endl++;}while(i<5);
	
}
