/*
7. Write a C++ program to implement a class called Date that has 
private member variables for day, month, and year. Include 
member functions to set and get these variables, as well as to 
validate if the date is valid.
*/
#include<iostream>
using namespace std;
class date{
	public:
		int month,year;
		char day[50];
	
		date(){
						
				cout<<"Enter day:";
				cin>>day;
				
				cout<<"Enter month:";
				cin>>month;
				
				cout<<"Enter year:";
				cin>>year;
			}
      void eligibility(){
      		if(year<2006){
		cout<<"You are eligible";
		
	}
	else{
		cout<<"You are not eligible";
	}
	  }	
}; 
int main(){
	date d1;
	d1.eligibility();

}