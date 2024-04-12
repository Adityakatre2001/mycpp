/* 1:Write a program to create an array of integers and perform following operations
on that array like
finding the sum, average, maximum and minimum number in that array. Accept the numbers
 of the
array from user. */


#include<iostream>
#include<algorithm>
using namespace std;

void sumarray()
{
}


int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
		for(int i=0;i<n;i++){
			cout<<"Add elements to the array :";
			cin>>arr[i];
		}//cout<<arr[i];

	int sum = 0;
	int maxnum = arr[0];
	int minnum = arr[0];


	for(int i =0;i<n;i++){
		sum = sum + arr[i];
		if( arr[i] > maxnum){
		maxnum = arr[i];
		}
		if(arr[i] < minnum){
			minnum = arr[i];
		}
		double average = static_cast<double>(sum)/n;
	}
	double average = static_cast<double>(sum)/n;
	cout<<"***********************************"<<endl<<endl;
	cout<<"sum of array is : "<<sum<<endl;
	cout<<"Maximum value from given array is : "<<maxnum<<endl;
	cout<<"Minimum value from given array is : "<<minnum<<endl;
	cout<<"Average of given array is : "<<average<<endl;
	return 0;


}

