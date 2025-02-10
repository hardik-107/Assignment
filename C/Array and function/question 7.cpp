/*6. WAP to make addition, Subtraction and multiplication of 
two matrix using 2-D Array 
*/
#include<stdio.h>
int main(){
	int a[2][2]={{1,2},{4,6}},row,col,b[2][2]={{2,3},{2,4}},choice;
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n");
		for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("Enter choice:1.Addition \n 2.Subtraction \n 3. Multiplication \n4. Division");
	scanf("%d",&choice);3
	
	switch(choice){
		
		case 1:
			printf("%d %d \n %d %d",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);
			break;
		case 2:
			printf("%d %d \n %d %d",a[0][0]-b[0][0],a[0][1]-b[0][1],a[1][0]-b[1][0],a[1][1]-b[1][1]);
			break;
		case 3:
			printf("%d %d \n %d %d",a[0][0]*b[0][0],a[0][1]*b[0][1],a[1][0]*b[1][0],a[1][1]*b[1][1]);
			break;;
		case 4:
			printf("%d %d \n %d %d",a[0][0]/b[0][0],a[0][1]/b[0][1],a[1][0]/b[1][0],a[1][1]/b[1][1]);
			break;
	
}
}