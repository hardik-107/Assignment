// Mulyilevel Inheritance
#include<iostream>
using namespace std;
class student{
	public:
		int rollno,maths,sci,eng;
		string name;
	
		void get_sub_marks(int a,int b,int c,int d,string e){
			rollno=a;
			maths=b;
			sci=c;
			eng=d;
			name=e;
		}	
};
class activity:public student{
	
	public:
		int sports,music;
	
	void get_act_marks(int a,int b){
		sports=a;
		music=b;
	}	
}; 
class result:public activity{
	private:
		int total;
	public:
		void cal_total(){
			total=sci+maths+eng+sports+music;
		}
		void print_result(){
			cout<<"\n roll no :"<<rollno<<" Name :"<<name<<" total :"<<total;
		}
};
int main(){
	int u,v,w,x,y,z;
	
	cout<<"Enter roll no:";
	cin>>u;
	
	cout<<"Enter marks in maths:";
	cin>>v;
	
	cout<<"Enter marks in sci:";
	cin>>w;
	
	cout<<"Enter marks in eng:";
	cin>>x;
	
	cout<<"Enter marks in sports:";
	cin>>y;
	
	cout<<"Enter marks in music:";
	cin>>z;
	
	result r1;
	
	r1.get_sub_marks(u,v,w,x,"Hardik");
	r1.get_act_marks(y,z);
	r1.cal_total();
	r1.print_result();
}