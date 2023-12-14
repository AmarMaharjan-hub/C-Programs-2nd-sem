//WAP to accept amount from user and add 5% tax on it and display the total amount.
#include<stdio.h>

void main()
{
	float a,t,total;
	printf("Enter the amount:");
	scanf("%f",&a);
	t=a*5/100;
	total=t+a;
	printf("the total amount is %f",total);
}
