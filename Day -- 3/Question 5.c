// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
	float celsius;
	float fahrenheit;
	
	printf(" Enter celsius value : ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5)+32;
	printf(" Celsius to fahrenheit value is %f :", fahrenheit);
	
	return 0;
}