//WAP to check upper case,lower case or special character

#include<stdio.h>
int main(){
	int a;
	
	
	printf("1.A\n2.a\n3.#");
	
	printf("\nEnter your choice:");
	scanf("%d",&a);
	
	
	
	if(a==1){
		printf("It ia an Upper case character");
	}else if(a==2){
		
		printf("It is a lowercase character");
	}else if(a==3){
		
		printf("It is  a special character");
	}
}