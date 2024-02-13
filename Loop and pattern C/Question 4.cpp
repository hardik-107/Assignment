/*
WAP to write table 
*/
#include<stdio.h>
int main(){
	int i,a,b,c;
	
	printf("Enter your number:");
	scanf("%d",&a);
	
	printf("Enter your multiplier:");
	scanf("%d",&b);
	
	for(i=1;i<=a;i++){
		c=i*b;
		printf("\n%d x %d = %d",i,b,c);
	}
	
	
	
	
}