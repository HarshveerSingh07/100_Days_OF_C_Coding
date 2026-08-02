// Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main (){
	int num1;
	int num2;
	int num3;
	
	printf(" Enter num1 value : ");
	scanf("%d", &num1);
	
	printf(" Enter num2 value : ");
	scanf("%d", &num2);
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf(" num1 %d  ",num1);
	printf(" num2 %d  ",num2);
	
	return 0;
}