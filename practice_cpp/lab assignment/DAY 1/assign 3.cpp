#include<iostream>
using namespace std;

int main(){
	float a,b,temp;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	cout<<"values before swapping is A = "<<a<<" B = "<<b<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<"values after swapping is A = "<<a<<" B = "<<b<<endl;
}
