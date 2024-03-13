/*
2. Write a C++ Program to find Area of Rectangle using inheritance 
*/
#include<iostream>
using namespace std;
class value{
	public:
		int len,bre;
	void get_data(){
		cout<<"Enter the length:";
		cin>>len;
		
		cout<<"Enter the value of breath";
		cin>>bre;
	}	
};
class sum:public value{
	
	public:
		
		void ans(){
		
		cout<<"The area of given rectangle is "<<len*bre;
	}
};
int main(){
	sum s1;
	s1.get_data();
	s1.ans();
}