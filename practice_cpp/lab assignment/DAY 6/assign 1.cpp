/*
Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods :
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details*/

#include <iostream>
#include<string>
using namespace std;
class emp{
	public:
	int empid,deptId;
	double basicSalary;
	string name;
	public:
		emp(){
//			name = "Employee";
//			int empid = 101;
//			deptId = 100;
//			basicSalary = 1000;
		}
		emp(string name,int empid,int deptId,double basicsalry)
		{
			this->name = name;
			this->empid = empid;
			this->deptId = deptId;
			this->basicSalary = basicSalary;
		}
		 virtual void netSalary() const
		{
//			double perfBonus =  100;
//			double netsalary = basicSalary + perfBonus;
//			cout<<"Your Net Salary is : "<<netsalary<<endl;
			//return 0;
		}
};

class mgr : public emp{
	
	double perfBonus;
	public:
	mgr(){
			name = "Employee";
			int empid = 101;
			deptId = 100;
			basicSalary = 1000;
			perfBonus = 0;
			}
	
	mgr(string name,int empid,int deptId,double basicsalary,double perfBonus){
			this->name = name;
   			this->empid = empid;
			this->deptId = deptId;
			this->basicSalary = basicSalary;
			this->perfBonus = perfBonus;
	}
	    void netSalary() const override
		{
			double digit =  (basicSalary/10);
			double netsalary = basicSalary + digit;
			cout<<"Your Net Salary is : "<<netsalary<<endl;
		}
};

class worker : public emp{
	public:
	int hoursWorked,hourlyRate;
	public:
	worker(){
		    name = "Worker";
			int empid = 101;
			deptId = 100;
			basicSalary = 1000;
			hoursWorked  = 0;
			hourlyRate = 100;
	}
	
	worker(string name,int empid,int deptId,double basicsalry,int hoursWorked, int hourlyRate ){

			this->name = name;
   			this->empid = empid;
			this->deptId = deptId;
			this->basicSalary = basicSalary;
			this->hoursWorked = hoursWorked;
			this->hourlyRate = hourlyRate;
			}
			
		void netSalary() const override
		{
			double perfBonus =  (basicSalary+(hoursWorked*hourlyRate));
			double netsalary = basicSalary + perfBonus;
			cout<<"Your Net Salary is : "<<netsalary<<endl;
		}
		
		void setrate(double &hourlyRate){
			 hourlyRate = hourlyRate;
		}
		int getrate(){
			return hourlyRate;
		}
};


int main()
{
	string name;
	int empid;int deptId;double basicsalary,perfBonus;
	int hoursWorked, hourlyRate;
//	cout<<"Enter Emploee Name : ";
//	cin>>name;
//	cout<<"Enter Employee ID : ";
//	cin>>empid;
//	cout<<"Enter Department ID : ";
//	cin>>deptId;
//	cout<<"Enter Basic Salary : ";
//	cin>>basicsalary;
	
//	emp em(name,empid,deptId,basicsalary);
//	em.netSalary();
//	worker work(name,empid,deptId,basicsalary,hoursWorked,hourlyRate);
	worker work("Aditya",101,111,10000,5,200);
	work.netSalary();
//	mgr mg(name,empid,deptId,basicsalary,perfBonus);
//	mg.netSalary();
	
	//name,int empid,int deptId,double basicsalry,int hoursWorked, int hourlyRate
	return 0;

	
	
	
	
}
