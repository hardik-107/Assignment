/*
WAP to show monday to sunday
*/
#include<stdio.h>
int main(){
	int choice;
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
		
	switch(choice){
	
	case 1:
		printf("It is monday:");
		break;
	case 2:
	    printf("It is tuesday");
		break;
	case 3:
	    printf("It is wednesday");
		break;
	case 4:
	    printf("It is thursday");
		break;
	case 5:
	    printf("It is friday");
		break;
	case 6:
	    printf("It is ssaturday");
		break;
	case 7:
	    printf("It is sunday");
		break;
	default:
	printf("Wrong choice");
	break;							
	
	
	
	}
	
	
}