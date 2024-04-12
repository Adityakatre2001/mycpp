#include<iostream>
using namespace std;
void power(int m, int n)
{
	int result = 1;
	for(int i=0;i<n;i++){
		result *= m;
		
	}cout<<m<<" to the power "<<n<<" is "<<result<<endl;
}


int main()
{
	int m, n;
	cout<<"Enter base number : ";
	cin>>m;
	cout<<"Enter power number : ";
	cin>>n;
	power(m,n);
	return 0;
}
