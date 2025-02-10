/*
 13.calculate the Factorial of a Given Number 
using while loop 
*/
#include<stdio.h>
int main(){
	
	int a,i,fact=1;
	
	printf("Enter your limit:");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
}