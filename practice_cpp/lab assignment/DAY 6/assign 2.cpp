/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt)
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.*/


#include <iostream>
#include<string>
using namespace std;

class BankAccount{
	int AccountNo;
	string customerName;
	double balance;
	public:
		BankAccount(int AccountNo,string customerName,double balance):AccountNo(AccountNo),customerName(customerName),balance(balance){
		}
		
		void withdraw(double amt){
			
			double amtt = amt;
			if(balance>0 && amtt<=balance){
				
				cout<<"Balance before withdraw : "<<balance<<endl;
				balance = balance - amtt;
				cout<<"Withdraw of  "<<amtt<<"  has been done sucessfully."<<endl;
				
				cout<<"Balance After withdraw : "<<balance<<endl;
			}
			else
				cout<<"Invalid withdraw ";
		}
		
		void deposit(double amt){

			double amt1= amt;
			cout<<"Balance before deposit : "<<balance<<endl;
			balance = balance + amt1;
			cout<<"Deposit of  "<<amt1<<"  has been done sucessfully."<<endl;
			cout<<"Balance After deposit : "<<balance<<endl;
		}
		
		double getbalance(){
			return balance;
		}
};


int main()
{
	double amt;

	BankAccount ac(123,"Aditya",5425.00);
	int num;
	int i;
	do{
    cout<<"**********************************************\n\n";
	cout<<"For Deposit press 1"<<endl;
	cout<<"For Withdraw press 2"<<endl;
	cout<<"To check balance press 3 : ";
	cin>>num;
	cout<<"\n\n**********************************************\n\n";
	if(num==1){
		cout<<"Enter Amount for deposit : ";
		cin>>amt;
		ac.deposit(amt);
		//cout<<"Account Balance after transaction is : "<<ac.getbalance()<<endl;
	}
	else if(num==2){
		cout<<"Enter Amount for withdraw : ";
		cin>>amt;
		ac.withdraw(amt);
		//cout<<"Account Balance after transaction is : "<<ac.getbalance()<<endl;
	}
	else if(num==3){
		cout<<"Account Balance after transaction is : "<<ac.getbalance()<<endl;
	}
	else
	{
		cout<<"Invalid Input";
	}}while(i<5);

	return 0;
}







