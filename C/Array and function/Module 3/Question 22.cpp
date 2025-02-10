//Calculate compound intrest
//Amount=P*(1+R/100)*t
//C=Amount-P

#include<stdio.h>

int main(){
	int p,r,t,A,C;
	
	printf("Enter the principal amount:");
	scanf("%d",&p);
	
	printf("Enter the rate:");
	scanf("%d",&r);
	
	printf("Enter the time:");
	scanf("%d",&t);
	
	A=p*(1+r/100)^t;
	
	printf("\nThe amount is : %d",A);
	
	C=A-p;
	
	printf("\nThe compound intrest is : %d",C);
}