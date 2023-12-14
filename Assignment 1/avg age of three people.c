#include<stdio.h>
void main()
{
	float a,b,c,avg;
	printf("Enter the age of the first person:");
	scanf("%f",&a);
	printf("Enter the age of the second person:");
	scanf("%f",&b);
	printf("Enter the age of the third person:");
	scanf("%f",&c);
	avg=(a+b+c)/3;
	printf("The average of the age of the three people is:%f",avg);
}
