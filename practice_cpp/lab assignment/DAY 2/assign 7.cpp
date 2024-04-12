/*
7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include<iostream>
using namespace std;

class student{
	public:
	int rollno,marks1,marks2,marks3;
	
	void acceptinfo(int rollno,int marks1,int marks2,int marks3)
	{
	     this->rollno = rollno;
		 this->marks1 = marks1;
		 this->marks2 = marks2;
		 this->marks3 = marks3;
		
	}
	void display(){
		cout<<endl<<endl;
		cout<<"Roll Number : "<<rollno<<endl;
		cout<<"Marks of first subject : "<<marks1<<endl;
		cout<<"Marks of second subject : "<<marks2<<endl;
		cout<<"Marks of Third subject : "<<marks3<<endl<<endl;
		int total = marks1+marks2+marks3;
		cout<<"Total marks are : "<<total<<endl;
		float per = (marks1+marks2+marks3)/3;
		cout<<"Total percentage are : "<<per<<endl;

		if(per>=75 && per<=100){
			cout<<"Your grade is A "<<endl<<endl;
		}else if(per>=60 && per<75){
			cout<<"Your Grade is B "<<endl<<endl;
		}else if(per>=40 && per<60){
			cout<<"Your Grade is C "<<endl<<endl;
		}else if(per>40){
			cout<<"Your are Faild to pass exam "<<endl<<endl;
		}else
		{
			cout<<"Invalid Input "<<endl<<endl;
		}
	}
};


int main()
{
	int rollno,marks1,marks2,marks3;
	int i;
	do{
	cout<<"********************* welcome *********************"<<endl<<endl;
	cout<<"Enter Your Roll Number : ";
	cin>>rollno;
	cout<<"Enter Your Marks of first subject : ";
	cin>>marks1;
	cout<<"Enter Your Marks of second subject : ";
	cin>>marks2;
	cout<<"Enter Your Marks of Third subject : ";
	cin>>marks3;
	student stud;
	stud.acceptinfo(rollno,marks1,marks2,marks3);
	stud.display();}while(i<5);
}
