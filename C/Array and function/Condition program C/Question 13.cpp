/* 
WAP to find minimum value between 3 number using ternary operator
*/
#include<stdio.h>
int main(){
	
	int a,b,c,small;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	printf("Enter the value b:");
	scanf("%d",&b);
	
	printf("Enter the value c:");
	scanf("%d",&c);
	
	small=(a<b)?((a<c)?a:c):((b<c)?b:c);
	
	printf("Smallest number is %d",small);
}