//11:Check if number is a prime number or not.:
#include<iostream>
using namespace std;


bool isprime(int num)
{
	
	
	if(num<=0)
		return false;
	if(num<=3)
		return true;
	if(num%2==0 || num%3==0)
		return false;
	for(int i = 5; i*i <= num;i=i+6){
		if(num % i ==0 || num % (i+2)==0)
		return false;
	}return true;
}

int main()
{
	int n1;
	int i;
	do{

	cout<<"Enteer a number : ";
	cin>>n1;
	if(isprime(n1))
		cout<<"IT is prime number \n";
	else
		cout <<"It is not prime number \n";}while(i<5);
	
	return 0;
}






