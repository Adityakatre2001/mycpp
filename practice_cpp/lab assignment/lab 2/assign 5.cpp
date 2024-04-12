//5. Write a program to calculate factors of a given number.

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter Number to calculate factor : ";
	cin>>num;
	cout<<"Factors of given number is : ";
	for(int i=1;i<=num;i++){
		if(num%i==0){
			cout<<i<<" ";
		}
	}cout<<endl;
}
