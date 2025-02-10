/*
WAP to find week day and number
*/
#include<stdio.h>
int main(){
	int choice;
	printf("\n1\n2\n3\n4\n5\n6\n7");
    printf("\n Enter your choice number:");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("Today is Sunday");
	}else if(choice==2){
		printf("Today is Monday");
	}else if(choice==3){
		printf("Today is Tuesday");
	}else if(choice==4){
		printf("Today is Wednesday");
	}else if(choice==5){
		printf("Today is Thursday");
	}else if(choice==6){
		printf("Today is Friday");
	}else if(choice==7){
		printf("Today is Saturday");
	}else{
		printf("Wrong choice");
	}
	
}