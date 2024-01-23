/*
WAP to find electricity bill
*/
#include<stdio.h>
int main(){
	int unit,a;
	float  b;
	printf("Enter the units consumed:");
	scanf("%d",&unit);
	
	if(unit<=50){
		a=unit*0.50;
		b=a*0.18+a;
		printf("\nThe bill without tax is:%d",a);
		printf("\nThe bill with tax is:%f",b);
		
	}else if(unit>50 and unit<=150){
		a=unit*0.75;
		b=a*0.18+a;
		printf("\nThe bill without tax is:%d",a);
		printf("\nThe bill with tax is:%f",b);
	}else if(unit>150 and unit<=250){
		a=unit*1.20;
		b=a*0.18+a;
		printf("\nThe bill without tax is:%d",a);
		printf("The bill with tax is:%f",b);
		
	}else{
		a=unit*1.50;
		b=a*0.18+a;
		printf("\nThe bill without tax is:%d",a);
		printf("\nThe bill with tax is:%f",b);
	}
	
}