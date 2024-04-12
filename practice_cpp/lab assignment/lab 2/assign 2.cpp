//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int power(int m, int n){
    int val = 1 ;
	for(int i = 0;i<n;++i){
		val = val*m;

}return val;

}
int main()
{
	int x,n,val;
	cout<<"enter base number : ";
	cin>>x;
	cout<<"Enter power number : ";
	cin>>n;
	val = power(x,n);
	cout<<"Number after operation "<<val;
	return 0;

	}

