// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
	int num;
	
	printf("Enter a number :");
	scanf("%d", &num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf("The entered number is zero");
		}
		else
		{
			printf("Number is positive");
		}
	}
	else
	{
		printf("Number is negative");
	}
	
	return 0;
	
}