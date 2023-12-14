//WAP a program to accept dollar from user and calculate the equuicavalent Nepalese rupees and display the result.
#include<stdio.h>
void main()
{
	float d,n;
	printf("enter the dollar:");
	scanf("%f",&d);
	n=d*111.76;
	printf("the nepalese rupees is:%f",n);
}
