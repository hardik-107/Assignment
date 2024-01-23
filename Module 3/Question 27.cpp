/*Covert days into months
30 days=1 month
*/
#include<stdio.h>
int main(){
	
	int a;
	float b;
	
	printf("Enter the number of days:");
	scanf("%d",&a);
	
	b=a/30;
	
	printf("The number of months is: %f",b);
}
