//2: Write a program to Accept a number and display its
// sum of digits.:ex 568    5+6+8


#include<iostream>
using namespace std;


int main()
{
	int n,sum=0;
	cout<<"Enter a number : ";
	cin>>n;
	int temp = n;
	while(temp!=0){
		int digit = temp % 10;
		sum = sum + digit;
		temp = temp/10;
	}cout<<"Sum of digits of given number is : "<<sum;
	return 0;
}
