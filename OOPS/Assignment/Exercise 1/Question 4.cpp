/*4. Write a C++ program to implement a class called Circle that
has private member variables for radius. Include member
functions to calculate thecircle's area and circumference.
*/
#include<iostream>
using namespace std;
class circle{
	public:
		float pi=3.14,area,circumference;
		int r;
		
		void get_value(int a){
			r=a;
		}
	void get_circumference(){
		
		cout<<"\nThe circumference of circle is "<<2*pi*r;
	}
	void get_area(){
		
		cout<<"\nThe area of circle is"<<pi*r*r;
	}
};
int main(){
	circle c1;
	
	c1.get_value(5);
	c1.get_circumference();
	c1.get_area();
}