//A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	int area,w,l,h;
	
	printf("Enter the value w:");
	scanf("%d",&w);
	
	printf("Enter the value l:");
	scanf("%d",&l);
	
	printf("Enter the value h:");
	scanf("%d",&h);
	
	area=2*w*l+2*h*l+2*h*w;
	
	printf("The area of rectangular prism is: %d",area);
}