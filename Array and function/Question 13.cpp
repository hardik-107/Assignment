//13. WAP to accept 5 numbers from user and check entered 
// number is even or odd using of array
#include<stdio.h>
int main(){
	
	int i,n[5];
	
	for(i=0;i<5;i++){
		printf("Enter the number:");
		scanf("%d",&n[i]);
		
	}
	if(n[0]%2==0){
		printf("\nIt is an even number");
	}else{
		printf("\nIt is an odd number");
	}
		if(n[1]%2==0){
		printf("\nIt is an even number");
	}else{
		printf("\nIt is an odd number");
	}
		if(n[2]%2==0){
		printf("\nIt is an even number");
	}else{
		printf("\nIt is an odd number");
	}
		if(n[3]%2==0){
		printf("\nIt is an even number");
	}else{
		printf("\nIt is an odd number");
	}
		if(n[4]%2==0){
		printf("\nIt is an even number");
	}else{
		printf("\nIt is an odd number");
	}
}