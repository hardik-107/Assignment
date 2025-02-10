/* WAP to make addition, Subtraction and multiplication of 
two matrix using 2-D Array
*/
#include<stdio.h>
int add();
int sub();
int mul();
int div();
int main(){
	int choice,ans,c[1][1];
	
	printf("Enter your choice:\n 1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			ans=add();
			printf("The addition is:");
			printf("\n%d %d \n%d %d",c[0][0],c[0][1],c[1][0],c[1][1]);
			break;
		case 2:
		     ans=sub();
		     	printf("The subtraction is:");
		     	printf("%d %d \n %d %d",c[0][0],c[0][1],c[1][0],c[1][1]);
		     break;
		case 3:
		    ans=mul();
		    	printf("The multiplication is:");
		    	printf("%d %d \n %d %d",c[0][0],c[0][1],c[1][0],c[1][1]);
			break;
		case 4:
		 	ans=div();
		 		printf("The division is:");
		 		printf("%d %d \n %d %d",c[0][0],c[0][1],c[1][0],c[1][1]);
			 break;	 	
	}
	

	
} 
int add(){
		int a[1][1],b[1][1],c[1][1],row,col;
	
		for(row=0;row<2;row++){
	    	for(col=0;col<2;col++){
		
		printf("\nEnter the value of A %d %d:",row,col);
		scanf("%d",&a[row][col]);
		}
		
	}

	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++)
		printf("\nEnter the value of B %d %d:",row,col);
		scanf("%d",&b[row][col]);
	}
	
	
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			c[row][col]=a[row][col]+b[row][col];
		}
	
	}
	return c[1][1];
}
int sub(){
		int a[1][1],b[1][1],c[1][1],row,col;
	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++){
		
		printf("\nEnter the value of A %d %d:",row,col);
		scanf("%d",&a[row][col]);}
		printf("\n");
	}

	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++)
		printf("\nEnter the value of B %d %d:",row,col);
		scanf("%d",&b[row][col]);
	}
	printf(" \n");
	
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			c[1][1]=a[row][col]-b[row][col];
		}
		printf("\n");
	}
	return c[1][1];
}
int mul(){
	int a[1][1],b[1][1],c[1][1],row,col;
	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++){
		
		printf("\nEnter the value of A %d %d:",row,col);
		scanf("%d",&a[row][col]);}
		printf("\n");
	}

	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++)
		printf("\nEnter the value of B %d %d:",row,col);
		scanf("%d",&b[row][col]);
	}
	printf(" \n");
	
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			c[1][1]=a[row][col]*b[row][col];
		}
		printf("\n");
	}
	return c[1][1];
}
int div(){
	int a[1][1],b[1][1],c[1][1],row,col;
	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++){
		
		printf("\nEnter the value of A %d %d:",row,col);
		scanf("%d",&a[row][col]);}
		printf("\n");
	}

	
		for(row=0;row<2;row++){
		for(col=0;col<2;col++)
		printf("\nEnter the value of B %d %d:",row,col);
		scanf("%d",&b[row][col]);
	}
	printf(" \n");
	
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			c[1][1]=a[row][col]/b[row][col];
		}
		printf("\n");
	}
	return c[1][1];
}