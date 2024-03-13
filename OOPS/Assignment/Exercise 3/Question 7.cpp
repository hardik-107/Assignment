/*
7. Write a C++ Program to illustrates the use of Constructors 
in multilevel inheritance 
*/
#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		
		student(){	
				cout<<"Enter the roll number of the student:";
				cin>>roll;
		}
};
class test:public student{
	public:
		int maths,sci;
	test(){
		cout<<"Enter marks in maths:";
				cin>>maths;
				cout<<"Enter the marks in science:";
				cin>>sci;
	}
};
class result:public test{
	public:
		result(){
			
				cout<<"Marks in maths:"<<maths<<"Marks in science:"<<sci;
			
		}
};
int main(){
	result r1;
	
}