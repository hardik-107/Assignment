/*
3. Write a C++ program to create a class called Car that has
private member variables for company, model, and year.
Implement memberfunctions to get and set these variables.
*/
#include<iostream>
using namespace std;
class car{
	public:
		char company[50],model[50],year[5];
		
		
			
			void get_name(){
				cout<<"Enter the company name:";
				cin>>company;
			}
			void get_mod(){
				cout<<"Enter the model";
				cin>>model;
			}
			void get_ye(){
				cout<<"Enter the year:";
				cin>>year;
			}
			void print(){
				cout<<""<<company<<" "<<model<<" "<<" "<<year;
			}	
			
		
};
int main(){
	car c1;
	
	c1.get_name();
	c1.get_mod();
	c1.get_ye();
	c1.print();
}