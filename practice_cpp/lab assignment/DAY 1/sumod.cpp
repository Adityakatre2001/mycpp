#include<iostream>
using namespace std;

int main()
{
	int sumeven = 0,sumodd = 0;
	int num;
	cout<<"Enter a number : ";
	cin>>num;

	for(int i=1;i<=num;i++){

	    if(i%2==0){
		sumeven = sumeven + i;
		}
		else{
			sumodd = sumodd+i;
		}

	cout<<"sum of even number is "<<sumeven<<endl;
	cout<<"Sum of odd n number is "<<sumodd<<endl;
	return 0;
}
}

