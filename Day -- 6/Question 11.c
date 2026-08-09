// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){
	int number;
	
	printf(" Enter a number :");
	scanf("%d", &number);
	
	if ( number % 2==0){
		
		printf("Entered number is even: %d",number);
		
	}else{
		
		printf("Entered number is odd: %d",number);
		
	}
	
	return 0;
}