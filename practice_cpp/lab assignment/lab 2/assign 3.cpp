//3. Write a program to accept a character, an integer n and display the next n characters.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	int n;
	cout<<"Enter a character : " ;
	cin>>ch;
	cout<<"Enter n : ";
	cin>>n;
	char nextch = ch + n;
	cout<<"The Next n character is : "<<nextch;
	return 0;
}
