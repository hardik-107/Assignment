/*
WAP to find odd or even using ternary operator
*/
#include<stdio.h>
int main(){
	
	int a;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	a%2==0 ? printf("It is even number") : printf("It is odd number");
	
	
}