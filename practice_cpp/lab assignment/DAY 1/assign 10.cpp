//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3


#include<iostream>
using namespace std;
//int val = 1 ;
int power(int m, int n){
    int val = 1 ;
	for(int i = 0;i<n;++i){
		val = val*m;
		
}return val;

}
int main11()
{
	int n,m,val;
	cout<<"enter base number : ";
	cin>>n;
	cout<<"Enter poweer number : ";
	cin>>m;
	val = power(n,m);
	cout<<"Number after operation "<<val;
	return 0;
		
	}

