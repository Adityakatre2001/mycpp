//15: Write a  program to enter a number and print its reverse.


#include<iostream>
using namespace std;


int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int reversenum = 0;
	while (num != 0) {
	int digit= num % 10;
	reversenum = reversenum * 10 + digit;
    num = num / 10;
}
	cout<<"Reverse of given number is "<<reversenum<<endl;
	return 0;
}
