/*
	Convert years into days and month
*/

#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter the number of years:");
	scanf("%d",&a);
	
	b=a*12;
	
	printf("\nThe number of months in a year is: %d",b);
	
	c=b*30;
	
	printf("\nThe number of days in a year is: %d",c);
}