#include<iostream>
using namespace std;
class calculator{
	private:
		int a,b;
	public:
	     void get_value(int x,int y){
	     	a=x;
	     	b=y;
		 }	
		int add(){
			return a+b;
		}
		int sub(){
			return a-b;
		}
		int mul(){
			return a*b;
		}
		int div(){
			return a/b;
		} 
};
int main(){
	
	calculator c1;
	int m,n,choice;
	
	cout<<"Enter the value a:";
	cin>>m;
	
	cout<<"Enter the value b:";
	cin>>n;
	
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
	cin>>choice;
	
	c1.get_value(m,n);
	
	switch(choice){
		case 1:
			cout<<c1.add();
			break;
		case 2:
		    cout<<c1.sub();
			break;
		case 3:
		    cout<<c1.mul();
			break;
		case 4:
		     cout<<c1.div();
			 break;			
			
	}
}