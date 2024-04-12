
#include<iostream>
#include<string>
using namespace std;
class Employee{
	  public:int id;
	        string name;
  double salary;
	        public:Employee(){
	        	id=0;
	        	name="NA";
	        	salary=1000.00;
}
		Employee(int id,string name,double salary){
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void calSalary(){
			cout<<"Salary: "<<salary<<endl;
		}
		void display(){
			cout<<"ID: "<<this->id<<endl;
			cout<<"Name: "<<this->name<<endl;
		}
};
class Manager: virtual public Employee{
	protected:string dname;
	        double incentives;
	      public:Manager(){
	        	dname="No department assigned";
	        	incentives=0.00;
			}
			Manager(int id,string name,double salary,string dname,double incentives):Employee(id,name,salary){
				this->dname=dname;
				this->incentives=incentives;
			}
			void calSalary(){
				cout<<"Manager Salary: "<<salary+incentives<<endl;
			}
			void display(){
				Employee::display();
				cout<<"Department Name: "<<this->dname<<endl;
			}

};
class Developer: virtual public Employee{
	protected: double pa,fa,ta;
	public:Developer(){
		pa=25.25;
		fa=20.00;
		ta=12.50;
	}
	Developer(int id,string name,double salary,double pa,double fa, double ta):Employee(id,name,salary){
		this->pa=pa;
		this->fa=fa;
		this->ta=ta;
	}
	void calSalary(){
		cout<<"Developer Salary: "<<salary+pa+fa+ta<<endl;
			}
	void display(){
		Employee::display();
		cout<<"Pa: "<<this->pa<<endl;
		cout<<"Fa: "<<this->fa<<endl;
		cout<<"Ta: "<<this->ta<<endl;
	}
};
int main(){
	cout<<"--------------Employee-----------"<<endl;
	Employee emp1;
	emp1.display();
	emp1.calSalary();
	cout<<"\n\n--------------Default constructor of Manager-----------"<<endl;
	Manager mgr1;
	mgr1.display();
	mgr1.calSalary();
	cout<<"\n\n--------------Parameter Constructor of Manager-----------"<<endl;
	Manager mgr2(12,"Aditya",500.25,"SDE",250);
	mgr2.display();
	mgr2.calSalary();
		cout<<"\n\n--------------Default constructor of Developer-----------"<<endl;
	Developer dvp1;
	dvp1.display();
	dvp1.calSalary();
	cout<<"\n\n--------------Parameter Constructor of Developer-----------"<<endl;
	Developer dvp2(1,"Ram",900.25,51.23,41.30,87.21);
	dvp2.display();
	dvp2.calSalary();
	}

