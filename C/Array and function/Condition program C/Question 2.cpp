/*
WAP to read value of an integer m and displayy the value of n is 1
when m is larger than 0,0 when m is 0 and -1 when m is less than 0
*/

#include<stdio.h>
int main(){
	
	int m;
	
	printf("Enter value of m:");
	scanf("%d",&m);
	
	
	
	if(m>0){
		printf("The value of n is 1");
	}
	if(m=0){
		printf("The value  is 0 ");
	}
	if(m>0){
		printf("The value is -1");
	}
	
}