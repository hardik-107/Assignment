/*
8. Write a C++ program to implement a class called Student that 
has private member variables for name, class, roll number, and 
marks. Include member functions to calculate the grade based 
on the marks and display the student's information. Accept 
address from each student implement using of aggregation 
*/
#include<iostream>
using namespace std;
class Student{
	private:
		char name[50];
		int cla,roll_no,eng,sci,maths,total;
	public:
	    void get_value(){
	    	
	    	cout<<"Enter student name:";
	    	cin>>name;
	    	
	    	cout<<"Enter class:";
	    	cin>>cla;
	    	
	    	cout<<"Enter roll number:";
	    	cin>>roll_no;
	    	
	    	cout<<"Enter marks in english:";
	    	cin>>eng;
	    	
	    	cout<<"Enter marks in science:";
	    	cin>>sci;
	    	
	    	cout<<"Enter marks in maths:";
	    	cin>>maths;
		}
		void sum(){
			total=eng+sci+maths;
			
			cout<<"The total is "<<total;
		}
		void print(){
			
			cout<<""<<name<<""<<cla<<""<<""<<roll_no<<""<<eng<<""<<sci<<""<<""<<maths<<""<<total;
			
		}
};
int main(){
	Student s1;
	s1.get_value();
	s1.sum();
	s1.print();
}