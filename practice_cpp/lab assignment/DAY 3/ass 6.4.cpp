#include<iostream>
#include<string>
#include<typeinfo.h>
using namespace std;
class Vehicle{
	public: string name;
	private: double reg_no;
	public:
	    Vehicle(){
		name="NA";
		reg_no=100;
	    }
	Vehicle(string name, double reg_no){
		this->name=name;
		this->reg_no=reg_no;
	}
    virtual void display()const{
		cout<<"Name of the vehicle: "<<name<<endl;
		cout<<"Registration number of vehicle: "<<reg_no<<endl;
	}
};
class Car: public Vehicle{
	private: int wheels;
	public:
		Car(){
			wheels=0;
		}
		Car(string name,double reg_no,int wheels):Vehicle(name,reg_no)
		{
			this->wheels=wheels;
		}
		void display(){
			Vehicle::display();
			cout<<"Wheels of car: "<<wheels<<endl;
		}
		void StartEngine(string engine){
			cout<<"Your Car Engine is: "<<engine<<endl;
		}
};
class MotorCycle:public Vehicle{
	private: string color;
	public:
	    MotorCycle(){
	    	color="None";
	}
	    MotorCycle(string name,double reg_no,string color):Vehicle(name,reg_no){
	    	this->color=color;
		}
	    void display(){
	    	Vehicle::display();
	    	cout<<"Color of Motorcycle: "<<color<<endl;

	  	}
	  	void TopSpeed(double top_speed){
	  		cout<<"Top Speeed of motorcycle: "<<top_speed<<endl;
		}
};
class Truck:public Vehicle{
	private:string size;
	public:
	Truck(){
		size="Small";
	}
	Truck(string name,double reg_no,string size):Vehicle(name,reg_no){
		this->size=size;
	}
	void display(){
		Vehicle::display();
		cout<<"Size of the truck: "<<size<<endl;
	}
	void TruckWeight(double weight){
		cout<<"The "<<this->name<<" truck can load weight upto: "<<weight<<"kg"<<endl;
	}
};
int main()
{
	int i=0;
	Vehicle vObj("Bike",4141);
	vObj.display();
	Car cObj("BMW",52645,4);
	MotorCycle mObj("Kawasaki",5213,"Red");
	//mObj.TopSpeed(60);
	Truck tObj("Volvo",4562,"Large");
//tObj.TruckWeight(5000.25);
	Vehicle *fun[4];
	fun[0]=&vObj;
	fun[0]=&cObj;
	fun[1]=&mObj;
	fun[2]=&tObj;
	for(int i=0;i<3;i++){
		fun[i]->display();
	if(typeid(*fun[i])==typeid(Car)){
		Car*c=dynamic_cast<Car*>(fun[i]);
		c->StartEngine("ON");
	}
		if(typeid(*fun[i])==typeid(MotorCycle)){
		MotorCycle*s=dynamic_cast<MotorCycle*>(fun[i]);
		s->TopSpeed(220);
	}
		if(typeid(*fun[i])==typeid(Truck)){
		Truck*w=dynamic_cast<Truck*>(fun[i]);
		w->TruckWeight(500);
	}
	cout<<"\n-----------------"<<endl;
}
}

