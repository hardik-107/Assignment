#include<iostream>
using namespace std;
class myClass{
	public:
		void fun1();
};
void myClass::fun1(){
	cout<<"\n hello from myClass";
}
int a=20;
int main(){
	int a=10;
	
	cout<<"\nlocal a="<<a;
	cout<<"\nlocal"<<::a;
	
	myClass m1;
	m1.fun1();
}