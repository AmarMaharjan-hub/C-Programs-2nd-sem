//WAP to find the area and circumference of a circle.
#include<stdio.h>


#define pi 3.1416
void main()
{
	float a,c,r;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("\nThe area of the circle is %f",a);
	printf("\nThe circumference of the circle is  %f",c);
}
