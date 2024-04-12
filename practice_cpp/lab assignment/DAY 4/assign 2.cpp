/*
2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all
the data members. Also add the display function. Create Default and Parameterized constructors.
Create theobject of this class in main method and invoke all the methods in that class.
*/
#include<iostream>
using namespace std;

class date{
	int dd,mm,yyyy;
	public:
		date(){
			dd = 01;
			mm = 01;
			yyyy = 2000;
		}
		date(int d,int m,int y):dd(d),mm(m),yyyy(y){
			
		}
		
		int getdate() const {
			return dd;
		}
		void setdate(int d){
			dd = d;
		}
		
		int getmonth()const{
			return mm;
		}
		void setmonth(int m){
			mm = m;
		}
		
		int getyear()const{
			return yyyy;
		}
		void setyera(int y){
			yyyy = y;
		}
		void display(){
			cout<<"Date : "<<dd<<" Month : "<<mm<<" Year : "<<yyyy<<endl;
		}
};


int main()
{
	date da(01,06,2001);
	da.display();
	da.setdate(5);
	da.setmonth(9);
	da.setyera(5050);
	da.display();
}
