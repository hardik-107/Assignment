/*
6. Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, 
and salary. Include member functions to calculate and set 
salary based on employee performance. Using of 
constructor 
*/
#include<iostream>
using namespace std;
class employee{
	private:
		char name[50],emp_id[50];
		int sal,pro;
	public:
		void get_value(){
			cout<<"Enter the employee name:";
			cin>>name;
			
			cout<<"Enter the employee id:";
			cin>>emp_id;
			
			cout<<"Enter the employee salary";
			cin>>sal;
		}
		
			
	
};
int main(){
	
	employee e1;
	e1.get_value();
}