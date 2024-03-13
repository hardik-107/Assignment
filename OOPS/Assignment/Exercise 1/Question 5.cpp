/*
5. Write a C++ program to create a class called Rectangle that
has private member variables for length and width. Implement
member functions to calculate the rectangle's area and
perimeter.
*/
#include<iostreaM>
using namespace  std;
class rectangle{
	public:
		int length,breath;
		
		void value(int a,int b){
			length=a;
			breath=b;
		}
		void perimeter(){
			
			cout<<"\nThe perimeter of rectangle is "<<2*(length+breath);
		}
		void area(){
			
			cout<<"\nThe area of rectangle is "<<length*breath;
		}
};
int main(){
	
	rectangle r1;
	r1.value(10,20);
	r1.perimeter();
	r1.area();
	
}