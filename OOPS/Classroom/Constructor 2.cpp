#include<iostream>
using namespace std;
class employee{

		public:
			int emp_no;
			char emp_name[50],emp_email[50];
	employee(){
			
		cout<<"Enter employee number : ";
		cin>>emp_no;
		
		cout<<"Enter employ name:";
		cin>>emp_name;
		
		cout<<"Enter employ email: ";
		cin>>emp_email;	
	}
	void print(){
		cout<<"   "<<emp_no<<"   "<<emp_name<<"    "<<emp_email;
	}
};
int main(){
	employee e1,e2;
	
	e1.print();
	e2.print();
	
}