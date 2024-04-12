//3:. Write a  program to find sum of all even and odd numbers between
//1 to n.
#include<iostream>
using namespace std;

int main()
{
	int n,sum1 = 0,sum2=0;
	cout<<"Enter number : ";
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i%2==0){
			sum1 = sum1 + i;
			//cout<<"Sum of Even number is : "<<sum;
			
		}if(i%2!=0){
			sum2 = sum2 + i;
//			cout<<"Sum of Even number is : "<<sum;
		}
	} cout<<"Sum of Even number is : "<<sum1<<endl;
	cout<<"Sum of odd number is : "<<sum2<<endl;
	return 0;
}

