//WAP to find area and perimeter of circle

#include<stdio.h>
int main(){
	
	float radius,area,perimeter;
	
	printf("Enter the radius of circle:");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	
	printf("\n Area of circle = %f",area);
	
	perimeter=2*3.14*radius;
	
	printf("\n Perimeter of cicle=%f",perimeter);
}