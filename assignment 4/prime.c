#include<stdio.h>
void main()
{
	int a,i,p=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			p=1;
			break;
		}
	}
	if(p==1)
	{
		printf("%d is not a prime.",a);
	}
	else
	{
		printf("%d is a prime.",a);
	}
}
