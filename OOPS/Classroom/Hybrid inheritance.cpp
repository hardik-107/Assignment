#include<iostream>
using namespace std;
class A{
	public:
		void funA(){
			cout<<"\n class a";
		}
};
class B:virtual public A{
	public:
		void funB(){
			cout<<"\n class b";
		}
};
class C:virtual public A{
	public:
		void funC(){
			cout<<"\n class C";
		}
};
class D:public B,public C{
	public:
		void funD(){
			cout<<"\n class D";
		}
};
int main(){
	
	D obj;
	
	obj.funA();
	obj.funB();
	obj.funC();
	obj.funD();
}