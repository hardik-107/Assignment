/*
WAP to find largest of 3 numbers
*/
#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	printf("Enter the value b:");
	scanf("%d",&b);
	
	printf("Enter the value c:");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
	}
	if(b>c){
		if(b>a){
			printf("b is greater");
		}
	}
	if(c>a){
		if(c>b){
			printf("c is greater");
		}
	}
} 