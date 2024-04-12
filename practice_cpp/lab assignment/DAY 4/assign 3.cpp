/*
3. Create a class Book with data members as bname,id,author,price. Write getters and setters for
all thedata members. Also add the display function. Create Default and Parameterized constructors.
 Createthe object of this class in main method and invoke all the methods in that class. */
 
 
 #include<iostream>
 using namespace std;
 
 class book{
 	string bname,author;
 	int id,price;
 	public:
 		book(){
 			bname = "Automic Habbit";
 			author = "Adityanath";
 			id = 101;
 			price = 199;
		 }
		 book(string bname, string author, int id, int price):bname(bname),author(author),id(id),price(price){
		 }
		string getbname()const{
			return bname;
		}
		void setbname(string n){
			bname = n;
		}
		string getauthor()const{
			return author;
		}
		void setauthor(string a){
			author = a;
		}
		int getid()const{
			return id;
		}
		void setid(int i){
			id = i;
		}
		int getprice()const{
			return price;
		}
		void setprice(int p){
			price = p;
		}
		void display(){
			cout<<"Book Name : "<<bname<<endl<<"Author Name : "<<author<<endl<<"Book Id : "<<id<<endl<<"Book Price : "<<price<<endl<<endl;
			cout<<"******************************************************"<<endl<<endl;
		}
 };
 
 int main()
 {
 	book bk;
 	bk.display();
 	bk.setbname("Amir bap garib bap");
 	bk.setauthor("jaggu");
 	bk.setprice(299);
 	bk.setid(151);
 	bk.display();
 }
