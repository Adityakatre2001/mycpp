//5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.
#include<iostream>
using namespace std;

int main ()
{
	int num;
	int s;
	cout<<"enter a size of array : ";
	cin>>s;
	int arr[s];
	int i;
	for(i=0;i<s;i++){
		cout<<"Enter a number : ";
		cin>>arr[i];
	
	}

	for(int i =0;i<s;i++){
		cout<<arr[i]<<" ";
	} cout<<endl;
	int number ;
	cout<<"Enter a number to search : ";
	cin>>number;
	bool found = false;
	for(int i = 0; i<s;i++){
		if(arr[i]==number){
			found = true;
			break;
		}
	}
	if(found){

	cout<<"Entered Number found in array : "<<endl;

		}
		else{
			cout<<"Entered Number not found in array : "<<endl;}
	return 0;

}
