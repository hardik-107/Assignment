/*
WAP to eligibility to university
*/
#include<stdio.h>
int main(){
	int maths,chemistry,physics,total;
	
	printf("Enter marks in maths:");
	scanf("%d",&maths);
	
	printf("Enter marks in chemistry:");
	scanf("%d",&chemistry);
	
	printf("Enter marks in physics:");
	scanf("%d",&physics);
	
	if(maths>=65){
		printf("\nEligibilty criteria 1 clear");
	}else if(chemistry>=50){
		printf("\n Eligibility criteria 2 clear:");
	}else if(physics>=55){
		printf("\n Eligibility critera 3 is clear");
	}else{
		printf("\n Eligibility criteria not clear");
	}
	total=maths+chemistry+physics;
	
	printf("\n The total is %d",total);
	
	if(total>=190){
		printf("\n You are eligible");
	}else{
		printf("\n You are not eligible");
	}
	
}