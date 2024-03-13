#include<iostream>
using namespace std;
class value{
     protected:
     	int n;
     	
     	void get_value(){
     		cout<<"Enter the number";
     		cin>>n;
	}
};
class square:public value(int a){	
	n=a;
	void cal_sq(){
		
		cout<<"The square of number is :"<<a*a;
	}
};
class cube:public value(int a){
    n=a;
    
    void cal(int a){
    	n=a;
    	
    	void cal_cb{
		cout<<"The cube is"<<a*a*a;
		}
	}
};
class power:public value(int a){
	
		public:
		int base,i,power=1;
		
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
	
	int x;
	
	cout<<"Enter the value to find square and cube  of";
	cin>>x;
	
	power p1,square s1;
	value v1;
	
	v1.get_value();
	s1.
}