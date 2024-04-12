//21. Write a program, which accepts two integers and an operator as a character
// (+ - * / ), performs the
//corresponding operation and displays the result.

#include<iostream>
using namespace std;

int main()
{
	float n1,n2;
	int i;
	do{

	cout<<"\n\nEnter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	char a;
	cout<<"Enter operator : ";
	cin>>a;
	switch(a){
		case '+':
			cout<<"Sum of given number is "<<n1+n2<<endl;
			break;
		case '-':
			cout<<"Subtraction of given number is "<<n1-n2<<endl;
			break;
		case '*':
			cout<<"Muitiplication of given number is "<<n1*n2<<endl;
			break;
		case '/':
			if(n2>0){

			cout<<"Division of given number is "<<n1/n2<<endl;}
			else{
				cout<<"Can not divide"<<endl;
			}
			
			break;
		default:
			cout<<"Invalid input";
	}}while(i<5);
	 return 0;
}
