/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main ()
{
	int x,y;
	float tot,avg;
	
	printf("Enter the first number :");
	scanf("%d", &x);
	
	printf("Enter the first number :");
	scanf("%d", &y);
	
	tot = x + y ;
	avg = tot / 2;
	
	printf("Average is : %.2f ", avg);
	
	
	
	
	return 0;
}

