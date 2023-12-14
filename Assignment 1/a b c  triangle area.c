
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("Enter the first side of the triangle:");
	scanf("%f",&a);
	printf("Enter the second side of the triangle:");
	scanf("%f",&b);
	printf("Enter the third side of the triangle:");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("The area of the triangle is:%f",area);
	
	
}
