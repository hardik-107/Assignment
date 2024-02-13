/*
12. WAP to accept 5 students name and store it in array 
*/
#include<stdio.h>
struct student{
	char sname[50];
	int number[4];

	
}s[5];
int main(){
	
	int i;
	struct student s[5];
	
	for(i=0;i<=5;i++){
		
		printf("Enter the name of student:");
		scanf("%c",&s[i].sname);
	}
	
}
