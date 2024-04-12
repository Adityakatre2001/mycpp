/*4:. Write a  program to print all Prime numbers between 1 to n.*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	for(int i=2;i<=n;i++){
		if( i==3 || i==5 || i==7 || i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
		cout<<i<<" ";
		}
	}
	return 0;
	
	
}
