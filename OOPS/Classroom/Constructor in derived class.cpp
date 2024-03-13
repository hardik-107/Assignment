 #include<iostream>
 using namespace std;
 class superClass{
 	public:
 		int x;
 		
 		superClass(int a){
 			a=x;
		 }
		 void printSuper(){
		 	cout<<"\n x :"<<x;
		 }
};
class subClass:public superClass{
	public:
		int y;
		
		subClass(int b,int a):superClass(a){
			y=b;
		}
		void printSub(){
			cout<<"\n y: "<<y;
		}
};
int main(){
	
	subClass s1(10,55);
	s1.printSub();
	s1.printSuper();
	
}