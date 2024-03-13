#include<iostream>
using namespace std;
class Distance{
	 
  public:
  	int feet,inches;
  	distance(){
  	   feet=0;
	  inches=0;	
	  }
	  Distance(int f,int i){
	  	feet=f;
	  	inches=i;
	  }
	  void operator-(){
	  	feet=-feet;
	  	inches=-inches;
	  	cout<<"\n feet:"<<feet;
	  	couy<<"\n inches:"<<inches;
	  }
};
int main(){
	Distance d1(10,5),d2(-70,-30);
	
	-d1;
	-d2;
}