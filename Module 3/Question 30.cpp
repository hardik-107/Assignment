//Convert years into days and days into years

#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter the number of years:");
	scanf("%d",&a);
	
	b=a*365;
	
	printf("\nThe number of days in a year is:%d",b);
	
	printf("\nEnter the number of days:");
	scanf("%d",&c);
	
	d=c/365;
	
	printf("\nThe number of years is: %d",d);
}