/*WAP to take two Array input from user and sort them 
in ascending or descending order as per user’s choice 
*/
#include<stdio.h>
int main(){
	int i,a[1],b[1],choice;
	
	for(i=0;i<2;i++){
	
		printf("Enter the value a:");
		scanf("%d",&a[i]);
	}
		for(i=0;i<2;i++){
	
		printf("Enter the value b:");
		scanf("%d",&b[i]);
	}
	printf("\n Enter choice \n 1.Ascending \n 2.Descending");
	
	if(choice==1){
    if(a[0]>a[1]){
    	printf("%d\n%d",a[0],a[1]);
	}else{
		printf("%d\n%d",a[1],a[0]);
	}
	if(b[0]>b[1]){
		printf("%d\n%d",b[0],b[1]);
	}else{
		printf("%d\n%d",b[1],b[0]);
	}
	
	}

	
}