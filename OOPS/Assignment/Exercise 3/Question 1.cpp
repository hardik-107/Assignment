/*
1. Assume a class cricketer is declared. Declare a derived class 
batsman from cricketer. Data member of batsman. Total 
runs, Average runs and best performance. Member functions 
input data, calculate average runs, Display data. (Single 
Inheritance) 
*/
#include<iostream>
using namespace std;
class cricketer{
      public:
      	int total_run,average_run,best;
      	void get_data(){
		  
      	cout<<"Enter the total runs scored:";
      	cin>>total_run;
      	
      	cout<<"Enter the average run per match:";
      	cin>>average_run;
      	
      	cout<<"Enter the best score of the batsman:";
      	cin>>best;
 	}
};
class batsman:public cricketer{
	
	public:
		
	void print(){
	
	cout<<"Total run: "<<total_run<<"Average runn: "<<average_run<<"Best score: "<<best;
}
};
int main(){
	batsman b1;
	
	b1.get_data();
	b1.print();
}