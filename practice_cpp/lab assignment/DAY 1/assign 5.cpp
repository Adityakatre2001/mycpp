#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	do{

	cout<<"Enter a number to whether it is divisidle by 5 and 7 or not : ";
	cin>>a;
	
	if(a%5==0 && a%7==0)
		cout<<"Number is divisible by 5 and 7  "<<endl<<endl;
	else
		cout<<"Number is not divisible by 5 and 7 "<<endl<<endl;}while(i<5);
}
