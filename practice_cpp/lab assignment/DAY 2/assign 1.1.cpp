/*
1:Write a program that accepts numbers continuously as long as the number is positive and
prints the sum of the given numbers. */

#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	cout<<"Enter positive Number (Enter Negative number to exit)";
	
	while(true){
		int num;
		cout<<"Enter a number : ";
		cin>>num;
		if(num<0){
			break;
		}
		else
			sum +=num;
		
	}cout<<"Sum of Entered number is : "<<sum<<endl;
}
