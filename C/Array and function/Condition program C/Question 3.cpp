//WAP to check if given year is leap year

#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter the year:");
	scanf("%d",&a);
	
	b=a%4;

    if(b==0){
    	printf("The year is leap year");
	}else{
		printf("It is not a leap year");
	}
}