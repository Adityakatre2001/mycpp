//18:Write a program to find greatest of three numbers using nested if-else.

#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	cout<<"enter first number : ";
	cin>>n1;
	cout<<"enter second number : ";
	cin>>n2;
	cout<<"enter third number : ";
	cin>>n3;

//	n1 = greatest;
	if(n1>n2){
		if(n1>n3){
			cout<<"Number 1 is greatest";}
		else{
			cout<<"Number 3 is  greatest";
			}
	}else if(n2>n3){
		if(n2>n1){
			cout<<"Number 2 is greatest";}
		else{
			cout<<"Number 1 is greatest";
		}
		}
		else
		{
			cout<<"Number 3 is greatest ";
		}
		return 0;

	}

