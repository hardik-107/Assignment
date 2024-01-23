// WAP to accept height of person in centimeters and categorize the person
#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter the height in centimeteres:");
	scanf("%d",&a);
	
	if(a>=0 && a<=120){
		
		printf("The person is short");
	}else if(a>120 && a<=150){
		
		printf("The person has medium height");
	}else {
		printf("The person is tall");
	}
}