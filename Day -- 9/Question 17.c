// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
int main(){
	
	float a;
	float b;
	float c;
	float discriminant;
	float root1;
	float root2;
	float realpart;
	float imaginarypart;
	
	printf(" Enter cofficient  a , b and c : ");
	scanf("%f %f %f", &a,&b,&c);
	
	discriminant = b*b-4*a*c;
	
	if (discriminant>0){
		// Two real and distinct roots
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b + sqrt(discriminant)) / (2*a);
		printf(" Roots are real and distinct:\n");
		printf("Root1 = %.2f\n",root1);
		printf("Root2 = %.2f\n",root2);
		
	}
	else if (discriminant == 0){
        // Two real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    }
    else{
       
        printf("Roots are complex and imaginary:");
    }

    return 0;
}
