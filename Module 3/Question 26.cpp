/*Convert celcius to farhenheit
32 farenheits=0 celcius
*/
#include<stdio.h>
int main(){
	
	int a;
	float b;
	
	printf("Enter the farenheit value:");
	scanf("%d",&a);
	
	b=a-32*0.55555;
	
	printf("The converted value is:%f",b);
}
