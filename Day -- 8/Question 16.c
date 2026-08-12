// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
	
	int a;
	int b;
	int c;
	
	printf(" Enter three number :");
	scanf("%d %d ", &a,&b,&c );
	
	if(a>=b && a>=c){
		
		printf("%d is the largest number.",a);
	}
	else if(b>=a && b>=c){
		
		printf("%d is the largest number.",b);
	}
	else{
		
		printf("%d is the largest number.",c);
	}
	return 0;
}