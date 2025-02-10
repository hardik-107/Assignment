/*
15.Calculate sum of 10 numbers 
using of while loop 
*/
#include<stdio.h>
int main(){
	int i,n[11],total;
	
	for(i=1;i<11;i++){
		
		printf("Enter the number %d: ",i);
		scanf("%d",&n[i]);
		total+=i;
}
		printf("The sum of 10 number is %d",total);
    
	

}