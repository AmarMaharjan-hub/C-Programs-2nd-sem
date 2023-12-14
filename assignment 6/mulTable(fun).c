#include<stdio.h>
void mul(int);
void main()
{
	int i;
	printf("Enter a number:");
	scanf("%d",&i);
	printf("Multipication table.\n");
	mul(i);
}
void mul(n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
}
