/*13. Write a program to find the max number from given two numbers
using friend function.*/

#include<iostream>
using namespace std;
class Test{
	private:
		int x, y;
	public:
		void input(){
			cout<<"\n Enter Two numbers:";
			cin>>x>>y;
		}
		
		friend void find(Test t);
};

void find(Test t){
	if(t.x > t.y){
		cout<<"\nLargest is:"<<t.x;
	}else{
		cout<<"\nLargets is:"<<t.y;
	}
}

int main(){
	Test t;
	t.input();
	find(t);
}