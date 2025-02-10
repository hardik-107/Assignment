/*
WAP to basic salary of an employee and calculateits
*/
#include<stdio.h>
int main(){
    int salary;
	float a,b,c;
	
	printf("Enter the basic salary:");
	scanf("%d",&salary);
	
	if(salary<=10000){
	a=salary*0.20,b=salary*0.80;
	c=salary+a+b;
	printf("The gross salary is %f",c);
	}
	else if(salary<=20000){
		a=salary*0.25,b=salary*0.9;
		c=salary+a+b;
		printf("The gross salary is %f",c);
	}else{
		a=salary*0.3,b=salary*0.95;
		c=salary+a+b;
		printf("The gross salary is %f",c);
	}
	
		
			
}