/*
5. Assume that the test results of a batch of students are stored 
in three different classes. Class Students are storing the roll 
number. Class Test stores the marks obtained in two 
subjects and class result contains the total marks obtained 
in the test. The class result can inherit the details of the 
marks obtained in the test and roll number of students. 
(Multilevel Inheritance) 
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