#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b,c;
	printf("Enter your salary:");
	scanf("%d",&a);
	if(a<400000)
	{
		b=(float)a/100;
		c=(float)a-b;
		printf("the total salary is:%f",c);
	}
	else if(a<500000)
	{
		b=(float)a*10/100;
		c=(float)a-b;
		printf("the total salary is:%f",c);
	}
	else
	{
		b=(float)a*20/100;
		c=(float)a-b;
		printf("the total salary is:%f",c);
	}
}
