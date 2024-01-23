/*
WAP to enter month numberand show number of days
*/
#include<stdio.h>
int main(){
	
	int choice;
	
	printf("1\n2\n3\n4\n4\n5\n6\n7\n8\n9\n10\n11\n12");
	
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
    switch(choice){
    	case 1:
    		printf("It is January");
    		printf("Number of days=31");
    		break;
    	case 2:
		    printf("It is February");
			printf("Number of days =28");
			break;
			
		case 3:
		    printf("It is march");
			printf("Number of days=31");
			break;
		case 4:
		    printf("It is April");
			printf("Number of days=30");
			break;
		case 5:
		    printf("It is May");
			printf("Number of days=31");
			break;
		case 6:
		    printf("It is june");
			printf("Number of days=30");
			break;
		case 7:
		    printf("It is July");
			printf("Number of days=31");
			break;
		case 8:
		    printf("It is August");
			printf("Number of days=31");
			break;
		case 9:
		    printf("It is September");
			printf("Number of days=30");
			break;
		case 10:
		    printf("It is October");
			printf("Number of days=31");
			break;
		case 11:
		    printf("It is November");
			printf("Number of days=30");
			break;
		case 12:
		    printf("It is December");
			printf("Number of days=31");
			break;						
    
	}
    
}