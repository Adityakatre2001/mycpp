/*6. Write a program, which accepts annual basic salary of an employee and calculates and displays the
Income tax as per the following rules.
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20%
 > 3,00,000 Tax = 30% */
 
 #include<iostream>
 using namespace std;

int main()
{
	float salary;
	int i;
	do{

	cout<<"Enter your salary : ";
	cin>>salary;
	
	if(salary<=150000 && salary>=0)
		cout<<"you have to pay zero repees as Tax "<<endl;
	else if(salary<=300000 && salary>150000){

		 float tax = (salary/100)*20;
		 cout<<"You have to pay "<<tax<<" rupees as Tax. "<<endl;}
	else if(salary > 300000){

		 float tax = (salary/100)*30;
		 cout<<"You have to pay "<<tax<<" rupees as Tax. "<<endl;}
	else
	     cout<<"Invalid input";}while(i<5);
	return 0;
}
