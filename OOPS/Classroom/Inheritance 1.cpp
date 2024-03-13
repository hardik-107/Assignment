#include<iostream>
using namespace std;
class A{
	public:
	int a;
	void funA(){
		cout<<"\nFunction of class A ";
		
	}
};
class B:public A{
	public:
	int b;
	void funB(){
		cout<<"\nfunction of class B";
	}	
};
int main(){
	
	A objA;
	B objB;   //Class declaration
	
	objB.funA();
	objB.funB();
	
	objA.funA();
	
}