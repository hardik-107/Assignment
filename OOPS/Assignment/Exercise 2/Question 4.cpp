/*
4. Write a C++ program to implement a class called Bank
Account that hasprivate member variables for account number
and balance. Include member functions to deposit and
withdraw money from the account.
*/
include<iostream>
using namespace std;
class bank{
	private:
		int ac_no,balance;
		char type;
	public:
		void open_ac(){
		
//			char type;
			
			cout<<"Enter your account number:";
			cin>>ac_no;
			
			cout<<"Enter your balance:";
			cin>>balance;
			
			cout<<"Enter your account type:";
			cin>>type;
		}
	void deposite(){
		int amount;
		
		cout<<"\n Deposite";
		 
		cout<<"\n Enter your amount=";
		cin>>amount;
		
		balance=balance+amount;
		
		cout<<"\n Your balance is"<<balance;
	}
	void withdraw(){
		int amount,balance;
		
		cout<<"\n Withdraw";
		
		cout<<"\n Enter amount:";
		cin>>amount;

		balance=balance-amount;
	if(balance>amount){
		cout<<"Your current balance is:"<<balance;
	}
	else{
		cout<<"Insufficient balance";
	}
	
	}
	
	
};
int main(){
	
	bank b1;
	
	
	b1.open_ac();
	b1.deposite();
	b1.withdraw();	
		    
	
	
}