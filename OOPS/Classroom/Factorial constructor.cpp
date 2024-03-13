#include<iostream>
using namespace std;
class factorial{
	private:
		int fact,i,n;
    public:
	
	factoriaL(int a){
		
     n=a;
     
	}		
	void cal_fact(){
		
		for(i=n;i>=n;i--){
			
			fact=fact*i;
		}
	}
	void print(){
		cout<<"The factorial is"<<fact;		
	}	
};
int main(){
	int x;
	
	cout<<"Enter the number to find factorial of";
	cin>>x;
	
	factorial f1();
	
	f1.cal_fact(x);
	f1.print(x);
	}