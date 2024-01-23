//WAP to check number is positive negative or zero
#include<stdio.h>
int main(){
	
	int a;
	
	printf("Enter the integer value:");
	scanf("%d",&a);
	
	if(a>0){
		printf("It is an positive integer");
	}
	if(a=0){
		
		printf("It is 0 integer");
	}
	if(a<0){
		
		printf("It is negative integer");
	}
}