//Calculate condition statemeent
#include<stdio.h>
int main(){
	
	int a,b,choice;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	printf("Enter the value b:");
	scanf("%d",&b);
	
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
	
	printf("\n Enter you choice:");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("The sum of %d and %d is %d",a,b,a+b);
	}else if(choice==2){
		printf("The sub of %d and %d is %d",a,b,a-b);
	}else if(choice==3){
		printf("The multiplication of %d and %d is %d",a,b,a*b);
	}else if(choice==4){
		printf("The division of %d and %d is %d",a,b,a/b);
	}else{
		printf("Wrong choice");
	}
}