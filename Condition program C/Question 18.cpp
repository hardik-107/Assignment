/*
Wap to calculate profit and loss
*/
#include<stdio.h>
int main(){
	
	int sp,cp;
	
	printf("Enter the selling price:");
	scanf("%d",&sp);
	
	printf("Enter the cost price:");
	scanf("%d",&cp);
	
	if(sp>cp){
		printf("It is called as profit");
		printf("\nThe amount of profit is subtraction of %d and %d is %d",sp,cp,sp-cp);
	}
	if(cp>sp){
		printf("It is called as loss");
		printf("\nThe amount of loss is subtraction of %d and %d is %d",cp,sp,cp-sp);
	}
}