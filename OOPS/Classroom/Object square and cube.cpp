#include<iostream>
using namespace std;
class value{
	private:
		int a;
	public:
	void get_value(int x){
		a=x;
	}	
	int square(){
	return a*a;
	}
	int cube(){
	return a*a*a;
	}
	
};
int main(){
	int b;
	value obj1;
	
	cout<<"Enter the value:";
	cin>>b;
	obj1.get_value(b);
	cout<<"\n Square="<<obj1.square();
	cout<<"\n Cube="<<obj1.cube();
	
}