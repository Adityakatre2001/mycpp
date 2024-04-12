/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class
Animal and then create derived classes like Mammal, Bird, and Fish.
Each of these derived classes should have specific properties and methods related
to their respective categories of animals.
*/

#include<iostream>
#include<string>
using namespace std;

class animal{
	public:
		string name,size;
		int age;
		animal()
		{
			name = "unavailable";
			size = "unavailable";
			age  = 00;
		}
		animal(string name,string size,int age){
			this -> name = name;
			this -> size = size;
			this -> age  = age;
		}
		void display(){
			cout<<" Name : "<<name<<endl<<" Size : "<<size<<endl<<" Age : "<<age<<endl;
		}
		
};
class Mammal:virtual public animal{
	private:
		int numofcalf;
	
};
class Bird:virtual public animal{
		int flyingSpeed,flyingHeight;
		
		
};
class fish:virtual public animal{
		public:
		int swimmingspeed, debthofswim;
		void display(string name,string size,int age,int swim, int debth)
		{    this-> swimmingspeed = swim;
			 this-> debthofswim   = debth;
			cout<<" Name : "<<name<<endl
			<<" Size : "<<size<<endl
			<<" Age : "<<age<<endl
			<<" Speed of swimming : "<<swimmingspeed<<endl
			<<" debth of swimmig :"<<debthofswim<<endl;
			
		}
};

int main()
{
	animal an("lion","medium",21);
	an.display();
	fish fi;
	fi.display("mum","small",1,100,800);
	
}












