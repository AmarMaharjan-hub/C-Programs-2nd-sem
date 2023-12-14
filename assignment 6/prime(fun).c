#include<stdio.h>
int prime(int);
void main()
{
	int n,p;
	printf("Enter a number:");
	scanf("%d",&n);
	p=prime(n);
	if(p==0)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
		printf("%d is a composit number.",n);
	}

}
int prime(n)
{
	int p=0,i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
	return p;
}
