#include<stdio.h>
int factorial(int);
void main()
{
	int n,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=factorial(n);
	printf("The factorial is %d",f);
}
int factorial(int num)
{
	int f=1,i;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}
