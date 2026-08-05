// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
	int minutes;
	int hours;
	int seconds;
	
	printf(" Enter time in sec :");
	scanf("%d", &seconds);
	
	hours = seconds/3600;
	seconds = seconds%3600;
	minutes = seconds/60;
	seconds = seconds%60;
	
	printf(" The time is : %d:%d:%d",hours,minutes,seconds);
	
	return 0;
}