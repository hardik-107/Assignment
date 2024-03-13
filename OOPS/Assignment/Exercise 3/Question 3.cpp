/*
3. Create a class person having members name and age. Derive 
a class student having member percentage. Derive another 
class teacher having member salary. Write necessary 
member function to initialize, read and write data. Write also 
Main function (Multiple Inheritance) 
*/
#include<iostream>
using namespace std;
class person{
	public:
		int age;
		char name[50];
		void get_data(){
			cout<<"Enter the name of person";
			cin>>name;
			
			cout<<"Enter the age of person";
			cin>>age;
		}
};
class student{
	public:
	float per;
	
	void get_per(){
		cout<<"Enter the percentage:";
		cin>>per;
	}
};
class teacher:public person,public student{
	public:
		int salary;
		char teach[50];
		
		void get_sal(){
			cout<<"Enter teacher name:";
			cin>>teach;
			
			cout<<"Enter the salaruy of teacher:";
			cin>>salary;
		}
		void print(){
			cout<<"Student:"<<name<<" "<<age<<" "<<per;
			cout<<"Teacher:"<<teach<<""<<salary;
		}
};
int main(){
	teacher t1;
	t1.get_data();
	t1.get_per();
	t1.get_sal();
	t1.print();
}
