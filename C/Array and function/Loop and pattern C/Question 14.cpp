/*
14.Accept 5 numbers from user and find 
those numbers factorials
*/
#include<stdio.h>
int main(){
	
	int a,i,fact=1,b,c,d,e;
	
	printf("Enter your limit:");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
	
	printf("Enter your limit:");
	scanf("%d",&b);
	
	for(i=b;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
	
		printf("Enter your limit:");
	scanf("%d",&c);
	
	for(i=c;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
	
	printf("Enter your limit:");
	scanf("%d",&d);
	
	for(i=d;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
	printf("Enter your limit:");
	scanf("%d",&e);
	
	for(i=e;i>=1;i--){
		fact=fact*i;
	}
	printf("\n The factorial is %d",fact);
	
}