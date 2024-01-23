/*
WAP to read temperature
*/
#include<stdio.h>
int main(){
	
	int a;
	
	
	printf("Enter the temperature:");
	scanf("%d",&a);
	
	if(a<0){
		
		printf("Freezing weather");
	}else if(a>=0 and a<10){
		printf("Very cold weather");
	}else if(a>=10 and a<20){
		printf("Cold weather");
	}else if(a>=20 and a<30){
		printf("Normal weather");
	}else if(a>=30 and a<40){
		printf("Its hot");
	}else{
		printf("Is Very hot");
	}
}