/*
WAP to print electricity bill
*/
#include<stdio.h>
int main(){
	
	int a,b,d,e,f;
	float c;
	
	printf("Enter customer id:");
	scanf("%d",&a);
	
	printf("Enter units consumed:");
	scanf("%d",&b);
	
	if(b>0 and b<350){
	c=b*1.20;	
		printf("\nThe charge per unit is 1.20");
		printf("\nThe bill is %f",c);
	}else if(b>350 and b<600){
		c=b*1.50;
		printf("\n The charge per unit is 1.50");
		printf("\n The bill is %f",c);
	}else if(b>600 and b<800){
		c=b*1.80;
		printf("\n The charge per unit is 1.80");
		printf("\n The bill is %f",c);
	}else{
		c=b*2;
		printf("\n The charge per unit is 2.00");
		printf("\n The bill is %f",c);
	}if(c>=800.00){
		d=c*18;
		e=d/100;
		f=c+e;
	printf("\nThe surcharge is 18 per cent");
	printf("\nThe surcharge amount of %d and %d",d,e);
	printf("\nTotal surcharge is %d",f);	
	
	}
	
		
	}
	

