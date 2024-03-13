#include<iostream>
using namespace std;
class shape{
	protected:
		virtual void area()=0;
};
class rect:public shape{
	public:
     int m,n;		
		void get_value(int a,int b){

        a=m;
        b=n;
		}
		void area(){
			cout<<"The area of rectangle is: "<<m*n;
		}
		
};
class square:public shape{
	public:
		int m;
		void get value(int a){
			m=a;
		}
		void area(){
			cout<,"The area of square is: "<<m*m;
		}
};
int main(){
	
	rect r1;
	
	r1.get_value(10,20);
	r1.area();
	
	square s1;
	
	s1.value(10);
	s1.area();
}