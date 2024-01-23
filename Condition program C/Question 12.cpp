/*
WAP to find largest of three number using ternary operator
*/
#include<stdio.h>

int main(){
	
	int a,b,c,large;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	printf("Enter the value b:");
	scanf("%d",&b);
	
	printf("Enter the value c:");
	scanf("%d",&c);
	
	large=a>b ? ((a>c)?a:c) : ((b>c)?b:c);
	printf("The largest number is %d",large);
}