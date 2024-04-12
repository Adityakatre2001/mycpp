//19:Create menu driven program for Pizza Shop.And display total amount,

#include<iostream>
#include<iomanip>
using namespace std;
double display(){
	double price;
    cout<<"*******Welcome to our pizza shope*******"<<endl;
	cout<<"Menu"<<endl;
	cout<<"Enter 1 for Large Size pizza : "<<endl;
	cout<<"Enter 2 for medium size pizza : "<<endl;
	cout<<"Enter 3 for small size pizza :  "<<endl;
	cout<<"Enter 4 for exit : ";
	int a;
	cin>>a;

	switch(a){
		case 1:
			price = 300;
			break;
		case 2:
			price = 200;
			break;
		case 3:
			price = 100;
			break;
		case 4:
			exit(0);
		default:
			cout<<"Invalid Input";

} return price;

}
int main()
{
	
	double totalAmount = 0.00;
	while(true){
		double price = display();
	totalAmount = totalAmount + price;
 	cout << fixed << setprecision(2);
 
	cout<<"Your current total is : "<<totalAmount<<endl;
	cout<<"********************************************";
	
	} return 0;
}
	
	
	

