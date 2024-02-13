/*
WAP to write factorialmof a given number
*/
#include<stdio.h>
int main(){
	int a,i,fact=1;
	
	printf("Enter the number:");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--){
		fact=fact*i;
		
			
		}
	printf("The factorial is %d",fact);
	
	}
	