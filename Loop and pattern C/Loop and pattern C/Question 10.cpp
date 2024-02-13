/*
10.Write a program you have to make a 
summation of first and last Digit. (E.g., 
1234 Ans: -5) 
*/
#include<stdio.h>
int main(){
	int i,n[5];
	
	for(i=0;i<5;i++){
		printf("Enter the value of element %d: ",i);
		scanf("%d",&n[i]);
		
	}
	printf("The summation of 1st and last is %d",n[0]+n[4]);
}