/*
Convert minutes into seconds and hours
1 minute =60 seconds
1 hour=60 minutes
*/

#include<stdio.h>
int main(){
	
	int seconds,hours,minutes;
	
	printf("Enter the number of minutes:");
	scanf("%d",&minutes);
	
	hours=minutes/60;
	
	printf("\nThe number of mintues in hour: %d",hours);
	
	seconds=minutes*60;
	
	printf("\nThe number of seconds in minutes:%d",seconds);
	
}
