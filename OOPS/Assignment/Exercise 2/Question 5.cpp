/*
5. Write a C++ program to create a class called Triangle that has 
private member variables for the lengths of its three sides. 
Implement member functions to determine if the triangle is 
equilateral, isosceles, or scalene. 
*/
#include<iostream>
using namespace std;
class triangle{
	public:
		int l1,l2,l3,choice;
	
		void get_length(){
			
			cout<<"Enter the length:";
			cin>>l1;
			cout<<"Enter the length:";
			cin>>l2;
			cout<<"Enter the length:";
			cin>>l3;
		}
		void ch(){
		if(l1=l2){
		if(l2=l3){
	     cout<<"\nIt is an equilateral triangle";		
		}
	}if(l2=l1){
		if(l1!=l3){
			cout<<"\nIt is a scalene triangle";
		}
	}if(l1!=l2){
		if(l2!=l3){
			cout<<"\nIt is an isosceles triangle";
		}
	}
		}
		
};
int main(){
	triangle t1;
	
	t1.get_length();
	t1.ch();
	
	
}