//11. WAP to accept 5 numbers from user and display in reverse 
// order using for loop and array
#include<stdio.h>
int main(){
	
	int i,n[4];
	
	for(i=0;i<5;i++){
		printf("Enter the value %d:",i);
		scanf("%d",&n[i]);
	}
	for(i=4;i>=0;i--){
		printf("\n%d",n[i]);
	}
} 