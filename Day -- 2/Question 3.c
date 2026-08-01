// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
#include<math.h>
int main(){
	int Length;
	int Breadth;
	int Area;
	int Perimeter;
	
	printf(" Enter Length of rectangle :");
	scanf("%d", &Length);
	
	printf(" Enter Bredth of rectangle :");
	scanf("%d", &Breadth);
	
	Area = Length*Breadth;
	printf(" Area of rectangle is : %d \n",Area);
	
	Perimeter = 2*(Length + Breadth);
	printf(" Perimeter of rectangle is : %d \n ",Perimeter);
	
	return 0;
}