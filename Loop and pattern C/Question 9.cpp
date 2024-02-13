//Write a program make a summation of given number (E.g., 
#include<stdio.h>
int main(){
	int i,n[5];
	
	for(i=0;i<5;i++){
		printf("Enter the value of element %d: ",i);
		scanf("%d",&n[i]);
		
	}
	printf("The summation is %d",n[0]+n[1]+n[2]+n[3]+n[4]);
}