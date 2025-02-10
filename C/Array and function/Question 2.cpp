#include<stdio.h>
int add();
int sub();
int mul();
int div();
int main(){
	
        int i,j,ans,choice;
        
        printf("Enter the value of i:");
        scanf("%d",&i);
        
        printf("Enter the value of j:");
        scanf("%d",&j);
        
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:");
        scanf("%d",&choice);
        
        switch(choice){
        	
        	case 1:
        		ans=add();
        		printf("The addition is %d",ans);
        		break;
        	case 2:
			    ans=sub();
				printf("The subtraction is %d",ans);
				break;	
            case 3:
			    ans=mul();
				printf("The multiplication is %d",ans);
				break;
		    case 4:
			    ans=div();
				printf("The division is %d",ans);
				break;	
        	
		}
}
int add(){
        
	int i,j,l;
	l=i+j;
	return l;
	
}
int sub(){
	int i,j,l;
	l=i-j;
	return l;
	
}
int mul(){
	int i,j,l;
	l=i*j;
	return l;
}
int div(){
	int i,j,l;
	l=i/j;
	return l;
}


