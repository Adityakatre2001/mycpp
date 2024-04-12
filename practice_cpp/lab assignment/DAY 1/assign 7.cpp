/*7. Accept a lowercase character from the user and check whether the character is a vowel or consonant.
(Hint: a, e, i, o, u are vowels)*/

#include<iostream>
using namespace std;

int main(){
	char b;
	int i;
	do{

	cout<<"Enter a lowercase character : ";
	cin>>b;
	if(b>=97 && b<=122)
	{

	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
		cout<<"Entered character is vowels"<<endl<<endl;
	else
		cout<<"Enter character is consonant"<<endl<<endl;}
		
	else
		cout<<"Invalid Input"<<endl;}while(i<5);
	return 0;
}
