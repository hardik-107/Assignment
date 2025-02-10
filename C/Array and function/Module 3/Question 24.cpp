#include<stdio.h>
int main(){
	
	int s1,s2,s3,s4,s5,mean,total;
	
	
	printf("Enter the name of employ a:Hardik");
		
	printf("\nEnter the of salary of a:");
	scanf("%d",&s1);
	
	printf("\nEnter the name of employ b:Naman");
	
	printf("\nEnter the salary of b:");
	scanf("%d",&s2);
	
	printf("\nEnter the name of employ c:Abhinandan");
	
	printf("\nEnter the salary of c:");
	scanf("%d",&s3);
	
	printf("\nEnter the name of employ d:Chals");

    printf("\nEnter the salary of d:");
    scanf("%d",&s4);
    
    printf("\nEnter the name of employ e:Tarun");
   
    printf("\nEnter the salary of e:");
	scanf("%d",&s5);
    
    mean=s1+s2+s3+s4+s5/2;
    
    printf("The mean salary is: %d",mean);
    
    total=s1+s2+s3+s4+s5;
    
    printf("The total salary is:%d",total);
	
	
}