//WAP to accept two numbers and find add, sub, mul, div and mod.
#include<stdio.h>
void main()
{
	float a,b,sum,dif,mul,div;
	printf("enter the first number:");
	scanf("%f",&a);
	printf("enter the second number:");
	scanf("%f",&b);
	sum=a+b;
	dif=a-b;
	mul=a*b;
	div=a/b;
	printf("The sum, difference, multiplication & division is: \n%f \n%f \n%f \n%f",sum,dif,mul,div);

	
	int c,d,mod;	
	printf("\nenter the first number:");
	scanf("%d",&c);
	printf("enter the second number:");
	scanf("%d",&d);
	mod=c%d;
	printf("\nThe modulus is %d",mod);
}
