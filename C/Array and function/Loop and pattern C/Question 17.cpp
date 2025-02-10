/*17. Calculate 5 numbers from user and calculate number of 
even and odd using of while loop 
*/
#include<stdio.h>
int main(){
	
	int i,a,even_sum,odd_sum;
	
	printf("Enter the limit:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
	
    if(i%2==0){
    	printf(" \n%d",i);
    	printf("It is an even number");
    	
	}
	if(i%2!=0){
		printf(" \n%d",i);
		printf("It is an odd number");
	}

  
}
	even_sum+=i;
	odd_sum+=i;
	
	printf("\nThe even sum is %d",even_sum);
	printf("\nThe odd sum is %d",odd_sum);
}
