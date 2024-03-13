/*
6. Write a C++ program to create a class called Person that
has privatemember variables for name, age and country.
Implement member functions to set and get the values of
these variables.
*/
#include<iostream>
using namespace std;
class person{
	private:
		char name[50],country[50];
		int age;
public:	
	void get_name(){
		cout<<"Enter your name:";
		cin>>name;
	}	
	void get_age(){
		cout<<"Enter your age:";
		cin>>age;
		
	}
	void get_country(){
		cout<<"Enter the country name:";
		cin>>country;
	}
	void print(){
		
		cout<<" "<<name<<" "<<age<<" "<<country;
	}
};
int main(){
	
	person p1;
	
	p1.get_name();
	p1.get_age();
	p1.get_country();
	p1.print();
}