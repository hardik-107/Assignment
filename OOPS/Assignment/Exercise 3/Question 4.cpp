/*
4. Write a C++ Program display Student Mark sheet using Multiple 
inheritance
*/
#include<iostream>
using namespace std;
class student{
		public:
		int age,grade;
		char name[50];
		void get_data(){
			
			cout<<"Enter the name of student:";
			cin>>name;
			
			cout<<"Enter the age of student:";
			cin>>age;
			
			cout<<"Enter student class:";
			cin>>grade;
};
class subject{
	public:
		int eng,math,sci,hindi,ss;
		void get_val(){
		
		cout<<"Enter marks in english:";
		cin>>eng;
		cout<<"Enter marks in math:";
		cin>>math;
		cout<<"Enter marks in sci:";
		cin>>sci;
		cout<<"Enter marks in hindi:";
		cin>>hindi;
		cout<<"Enter marks in social science:";
		cin>>ss;
	
	}
};
class cal{
	public:
		int total;
		total=eng+hindi+sci+ss+maths;
		void sum(){
			cout<<"The total marks of student is:"<<total;
			cout<<"The percentage is:"<<total/500;
		}
};
class print:public student,public subject,public cal{
	public:
		void print(){
			cout<<""<<name<<" "<<age<<""<<grade;
			cout<<"Maths:"<<math<<"English"<<eng<<"Hindi"<<hindi<<"Science:"<<sci<<"Social science:"<<ss;
		}
};
int main(){
	print p1;
	
	p1.get_data();
	p1.get_val();
	p1.sum();
	p1.print();
}