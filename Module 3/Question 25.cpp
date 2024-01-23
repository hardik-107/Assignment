//Accept expenses from user and find avg of expenses
#include<stdio.h>
int main(){
	
	int a,b,c,d,e,avg;
	
	printf("Enter the expenses of a:");
	scanf("%d",&a);
	
	printf("\nEnter the expenses of b:");
	scanf("%d",&b);
	
	printf("\nEnter the expenses of c:");
	scanf("%d",&c);
	
	printf("\nEnter the expenses of d:");
	scanf("%d",&d);
	
	printf("\nEnter the expenses of e:");
	scanf("%d",&e);
	
	avg=a+b+c+d+e/2;
	
	printf("\nThe avg of expenses is:%d",avg);
}