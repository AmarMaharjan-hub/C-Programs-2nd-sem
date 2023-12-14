#include<stdio.h>
void name(int);
void main()
{
	int i;
	printf("Enter the nth term:");
	scanf("%d",&i);
	name(i);
}
void name(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d) Amar Maharjan.\n",i);
	}
}
