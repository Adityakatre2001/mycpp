#include<iostream>
using namespace std;
class Animal{
public:int size;
       string name;
       string place;
public:
    Animal(){ //default constructor
       // cout<<"--------Default constructor---------"<<endl;
        //data members
        size=35;
        name="xxxx";
        place="Earth";
    }

    Animal(int size,string name,string place){
    //iniatlize paramter constructor
    //this is used to avoid conflict of name
    this->size=size;
    this->name=name;
    this->place=place;
}

void Input(){
cout<<"Enter the size: ";
cin>>size;
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the place: ";
cin>>place;
}
virtual void display(){
//display function for displaying value
cout<<"Size of animal: "<<size<<endl;
cout<<"Name of animal: "<<name<<endl;
cout<<"Place where animal lives: "<<place<<endl;
}
};
class Mammal:public Animal{ //1st derived class for mammals
public: int legs;
        string food;
Mammal(){
    legs=4;
    food="rice";
}
Mammal(int size,string name,string place,int legs,string food):Animal(size,name,place)
{
this->legs=legs;
this->food=food;
}
void Input(){
Animal::Input();
cout<<"Enter the number of legs: ";
cin>>legs;
cout<<"Enter the food mammals eat: ";
cin>>food;
}
void display(){
Animal::display();
cout<<"Legs of Mammal "<<legs<<endl;
cout<<"Food Mammsl eat "<<food<<endl;
}
};
class Bird:public Animal{
public:int wing;
       float height;

	  public:
	     Bird(){
        wing=0;
        height=10;
   }
   Bird(int size ,string name,string place,int wing,float height):Animal(size,name,place){
    this->wing=wing;
    this->height=height;
   }

  void Input(){
Animal::Input();
cout<<"Enter the number of wings: ";
cin>>wing;
cout<<"Enter the height bird can fly: ";
cin>>height;
}
    void display(){
   	Animal::display();
    cout<<"wings of bird are "<<wing<<endl;
    cout<<"height of flying "<<height<<endl;

   }
};
class Fish:public Animal{
private:string colour;
        int age;
        public:Fish(){
        colour="NA";
        age= 10;
}
Fish(string colour,int age){
this->colour=colour;
this->age=age;
}
void Input(){
Animal::Input();
cout<<"Enter the colour of fish: ";
cin>>colour;
cout<<"Enter the age of fish: ";
cin>>age;
}
void display(){
Animal::display();
cout<<"colour of fish "<<colour<<endl;
cout<<"age of fish "<<age<<endl;
}
};
int main(){
cout<<"\n\n------------Bird-----------------\n\n"<<endl;
Bird biObj1;
biObj1.Input();
biObj1.display();
cout<<"\n\n---------------Mammal--------------\n\n"<<endl;
Mammal mamObj1;
mamObj1.Input();
mamObj1.display();
cout<<"\n\n---------------Fish--------------\n\n"<<endl;
Fish fisObj1;
fisObj1.Input();
fisObj1.display();
}

