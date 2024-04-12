/*
5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors.
Write getters and setters for all the data members.
Also add the display function. Create the object of this class in main method
 and invoke all the methods in that class.*/
 
#include<iostream>
using namespace std;
 class complexnumber
 {
 	int real; string imaginary;
 	public:
 	complexnumber(){
 		real = 0;
 		imaginary = "1i";
	 }

	 complexnumber(int real,string imaginary):real(real),imaginary(imaginary){
	 	
	 }
	 int getreal()const{
		return 0;
	 }
	 void setreal(int r){
	 	real = r;
	 }
	 string getimaginary()const{
		return imaginary;
	 }
	 void setimaginary(string m){
	 	imaginary = m;
	 }
	 void display()
	 {
	 	cout<<"Real Number is : "<<real<<endl<<"Imaginary number is : "<<imaginary<<endl<<endl;
	 	cout<<"******************************************************"<<endl<<endl;
	 }
 };
 
 int main()
 {
 	complexnumber cn;
 	cn.display();
 	cn.setreal(45);
 	cn.setimaginary("5i");
 	cn.display();
 }
 
 
