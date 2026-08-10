// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
	
    int year;
    
    printf("enter a year = ");
    scanf("%d", &year);
    
    if (year % 4 == 0){
    	
    	printf(" Entered year is leap year");
    	
    }else{
    	
        printf(" Entered is not a leap year");
    }
    return 0;
}