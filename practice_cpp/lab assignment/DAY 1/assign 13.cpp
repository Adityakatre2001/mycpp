#include<iostream>
using namespace std;

bool ispalindrom(int num)
{
	int reversednum = 0;
	int number = num;

	while(num>0){

	 int digit = number % 10;
	 reversednum = reversednum * 10 + digit;
	 number = number/10;
	 return number==reversednum;
}
     
}

int main(){
	int num;
	cout<<"Enter number to check whether it is palindrom or not : ";
	cin>>num;
	if(ispalindrom(num)){
		cout<<"Number is palinldrom ";
		}
	else{
		cout<<"Number is  not palindrom ";
		}
	return 0;
}
