/*
WAP to check whether a triangle cam be formed with given angles
*/
#include<stdio.h>
int main(){
	int a,b,c,total;
	
	printf("Enter angle a:");
	scanf("%d",&a);
	
	printf("Enter angle b:");
	scanf("%d",&b);
	
	printf("Enter angle c:");
	scanf("%d",&c);
	
	total=a+b+c;
	
	printf("\nThe sum of %d,%d and %d is %d",a,b,c,total);
	
	if(total=180){
		printf("\nThe triangle can be formed");
	}else{
		printf("\nThe triangle cannot be formed");
	}
	
}