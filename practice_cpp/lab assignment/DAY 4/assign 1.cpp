/*
1. Create a class Person with data members as name, age, city. Write getters and setters for
all the datamembers. Also add the display function. Create Default and Parameterized constructors.
Create theobject of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;


class person{
	string name,city;
	int age;
	public:
	person(){
		}
	person(string name, string city,int age):name(name),city(city),age(age){
		cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"City : "<<city<<endl;
	}
	string getname() const{
		return name;
	}
	void setname(string myname){
		name = myname;}
		
	string getcity() const{
		return city;
	}
	void setnamecity(string mycity){
		city = mycity;}
		
	int getage()const{
		return age;
	}
	void setage(int myage){
		age = myage;}
		
		
	void display(){
		
		cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"City : "<<city<<endl;
	}
		
		
};

int main()
{
	person per("Jack","Mumbai",88);

	per.setage(23);
	per.setname("Aditya");
	per.setnamecity("Pune");
	per.display();
}
