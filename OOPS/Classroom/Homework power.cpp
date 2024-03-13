#include<iostream>
using namespace std;
class value{
	public:
		int n;
	
		cout<<"Enter the value:";
		cin>>n;
};
class square{
	
	cout<<"The Square is integer is "<<n*n;
};
class cube{
	
	cout<<"The cube is integer is "<<n*n*n;
};
class power:public value,public square,public cube{
	
	public:
		int a,i,power=1;
		
		cout<<"Enter the power to find:";
		cin>>a;
		
		for(i=1;i<=n;i++){
			power=power*base;
		}
		void print(){
			
			cout<<"The power is "<<power;
		}
};
int main(){
	
	power p1;
	
	p1.n;
	p1.power;
	p1.print;
}