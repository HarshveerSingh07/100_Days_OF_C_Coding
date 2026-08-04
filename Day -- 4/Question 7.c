// Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main (){
	int num1;
	int num2;
	
	printf(" Enter num1 value : ");
	scanf("%d", &num1);
	
	printf(" Enter num2 value : ");
	scanf("%d", &num2);
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf(" num1 %d ",num1);
	printf(" num2 %d ",num2);
	
	return 0;
		
}