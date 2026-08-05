// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main (){
	float SI;
	float CI;
	float principal;
	float rate;
	float time;
	
	
	printf(" Enter principal value :");
	scanf("%f", &principal);
	
	printf(" Enter rate value : ");
	scanf("%f", &rate);
	
	printf(" Enter time value : ");
	scanf("%f", &time);
	
	SI = ( principal * rate * time )/100;
	printf(" sinple interest value is %f ", SI);
	
	
	
	CI = principal*(pow((1+rate/100),time)) - principal ;
	printf(" compound interest value is %0.2f ", CI);
	
	return 0;
}