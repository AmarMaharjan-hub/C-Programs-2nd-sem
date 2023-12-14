#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		i*=n;
		n--;
	}
	printf("The factorial number is:%d",i);
}
