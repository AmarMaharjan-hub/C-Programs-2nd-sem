#include<stdio.h>
float interest();
void main()
{
	float i;
	i=interest();
	printf("Interest=%.4f",i);
}
float interest()
{
	int p,t,r;
	float i;
	printf("Enter principal,time and rate of interest:\n");
	scanf("%d%d%d",&p,&t,&r);
	i=(float)p*t*r/100;
	return i;
}
