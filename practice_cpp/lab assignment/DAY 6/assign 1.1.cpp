#include <iostream>
#include<string>
using namespace std;
class emp{
	protected:
	int empid,deptId;
	double basicSalary;
	string name;
	public:
		emp(string name,int empid,int deptId,double basicsalary):name(name),empid(empid),deptId(deptId),basicSalary(basicsalary){
		}
		
		virtual double netSalary()
		{
			return 0;
		}
};

class mgr : public emp{
	private:
	double perfBonus;
	public:

	mgr(string name,int empid,int deptId,double basicsalary,double _perfBonus):emp(name,empid,deptId,basicsalary),perfBonus(_perfBonus){

	}
	double netSalary() override
		{
			return basicSalary + perfBonus;
		}
};

class worker : public emp{
	public:
	int hoursWorked,hourlyRate;
	public:


	worker(string name,int empid,int deptId,double basicsalry,int hoursWorked, int hourlyRate ):emp(name,empid,deptId,basicSalary),hoursWorked(hoursWorked),hourlyRate(hourlyRate){

			}

		double netSalary() override
		{
			return (basicSalary + (hoursWorked*hourlyRate));
		}

		
		double getrate(){
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
//	cout<<"Enter performance Bonus : ";
//	cin>>perfBonus;
//	cout<<"Enter how many hour you worked : ";
//	cin>>hoursWorked;
//	cout<<"Enter hourly Rate : ";
//	cin>>hourlyRate;

//	mgr mg(name,empid,deptId,basicsalary,perfBonus);
//	worker wk(name,empid,deptId,basicsalary,hoursWorked,hourlyRate);
	mgr mg("adi",125,564,65420,6500);
	worker wk("shyam",152,544,1000,5,600);
//

	cout<<"Net Salary of manager is : "<<mg.netSalary()<<endl;
	cout<<"Net Salary of worker is : "<<wk.netSalary()<<endl;
	
	cout<<"Hourly Rate is : "<<wk.getrate()<<  endl;

	return 0;

}




