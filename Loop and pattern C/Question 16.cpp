//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
	int i,a,sum;
	
	printf("Enter the limit:");
	scanf("%d",&a);
	
	i=1;
	
	while(i<=a){
		
		printf("\n%d",i);
		sum+=i;
		i++;
	}
	printf("The sum is %d",sum);
}