//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main (){
	int radius;
	float area;
	float circumference;
	
	printf(" Enter circle radius value :");
	scanf("%d", &radius);
	
	area = 3.14 * radius * radius;
	printf( " Area of circle is : %f \n",area);
	
	circumference = 2 * 3.14 * radius;
	printf(" Circumference of circle is : %f \n",circumference);
	
	return 0;
}