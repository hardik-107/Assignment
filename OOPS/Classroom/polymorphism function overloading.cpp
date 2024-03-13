//Polymorphism  function overloading
#include<iostream>
using namespace std;
class A{
	public:
		float sum(int a,float b){
			return a+b;
		}
		int sum(int a,int b,int c){
			return a+b+c;
		}
		double sum(int a,float b,double c,long c){
			return a+b+c+d;
		}
};
int main(){
	A obj;
	cout<<""<<obj.sum(10,20.56);
	cout<<"\n"<<obj.sum(25+55+90);
	cout<<"\n"<<obj.sum(10,10.10,10.10,10);
}