//Calculate compound intrest
//A=P(1+r/n)^n
#include<stdio.h>
int main(){
	
	int p,r,n,t,C;
	
	printf("Enter the principal rate:");
	scanf("%d",&p);
	
	printf("Enter the rate of intrest:");
	scanf("%d",&r);
	
	printf("Enter number of times intrest:");
	scanf("%d",&n);
	
	printf("Enter the time period:");
	scanf("%d",&t);
	
	C=p*(1+r/n)^t;
	
	printf("The compound intrest is : %d",C);
	 
}