/*
WAP to  input month number and display month
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
    		
    		break;
    	case 2:
		    printf("It is February");
			
			break;
			
		case 3:
		    printf("It is march");
			
			break;
		case 4:
		    printf("It is April");
			
			break;
		case 5:
		    printf("It is May");
			
			break;
		case 6:
		    printf("It is june");
			
			break;
		case 7:
		    printf("It is July");
			
			break;
		case 8:
		    printf("It is August");
			
			break;
		case 9:
		    printf("It is September");
			
			break;
		case 10:
		    printf("It is October");
			
			break;
		case 11:
		    printf("It is November");
			
			break;
		case 12:
		    printf("It is December");
			
			break;						
    
	}
    
}