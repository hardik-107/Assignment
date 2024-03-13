#include<iostream>
using namespace std;
class simple{
	private:
		
		float p,r,n,si;
	public:
	  simple(float a,float b,float c){
	  	
	  	p=a;
	  	r=b;
	  	n=c;
	  }
	  
	 void cal_si(){
	 	
	 	si=(p*r*n)/100;
	 } 	
	 void print(){
	 	
	 	cout<<"The simple interest is : "<<si;
	 }
};
int main(){
	
	float x,y,z;
	
	cout<<"Enter value of principal:";
	cin>>x;
	
	cout<<"Enter value of rate:";
	cin>>y;
	
	cout<<"Enter value of year:";
	cin>>z;
	
	simple s1(x,y,z);
	
	s1.cal_si();
	s1.print();
	
}