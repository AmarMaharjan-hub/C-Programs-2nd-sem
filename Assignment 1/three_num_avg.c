//WAP that accepts three numbers and display the average.


#include<stdio.h>

void main()
{
	float a,b,c,avg;
	printf("enter the first number:");
	scanf("%f",&a);
	printf("enter the second number:");
	scanf("%f",&b);
	printf("enter the third number:");
	scanf("%f",&c);
	avg=(a+b+c)/3;
	printf("the average of the three number is: %f",avg);
}
