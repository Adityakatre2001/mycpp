//9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include<iostream>
using namespace std;

int main()
{
	long fact = 1;
	int a;
	cout<<"Enter a number to get factorial : ";
	cin>>a;

	if(a<0){
		cout<<"Can't calculate factorial of negative number"<<endl;
	}
	else
	{
	for(int i = 1; i <= a; ++i) {
            fact *= i;
	
	}
	cout<<"Factorial of given number is "<<fact<<endl;
	}
	return 0;
}
