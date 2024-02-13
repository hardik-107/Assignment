/*
18. Write a C Program to Print the 
Multiplication Table
*/
#include<stdio.h>
int main(){
	
	int i,a,n,b;
	
	printf("Enter the number to find table of:");
	scanf("%d",&a);
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		b=a*i;
		
		printf("\n %d * %d is %d",a,i,b);
	}
}