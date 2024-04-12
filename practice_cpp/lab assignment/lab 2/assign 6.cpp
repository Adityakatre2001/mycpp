//6. Accept two numbers and calculate GCD of them.
#include<iostream>
using namespace std;

int gcd(int a, int b){
	
	while(b!=0){
		int temp = b;
		b = a%b;
		a = temp;
		
	}return a;
}

int main(){
	int n1,n2;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	
	cout<<gcd(10,15);
	
}
