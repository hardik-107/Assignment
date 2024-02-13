/*
Feebonaci
*/
#include<stdio.h>
int main(){
	
	int i,n,a=0,b=1,c;
	
	printf("Enter your your value:");
	scanf("%d",&n);
	
	printf("\n \t %d",a);
	printf("\n \t %d",b);
	
	for(i=3;i<=n;i++){
		c=a+b;
		printf("\t %d",c);
	}
}