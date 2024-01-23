//Write a program to accept two integer and check whether they are equal or not

#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("Enter the integer value a:");
	scanf("%d",&a);
	
	printf("Enter the integer value b:");
	scanf("%d",&b);
	
	if(a>b){
		
		printf("A is greater");
	}else{
		printf("B is greater");
	}
}