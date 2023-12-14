#include<stdio.h>
void main()
{
	int n,f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	pan:
	f*=n;
	n--;
	if(n!=0)
	{
		goto pan;
	}
	printf("the factorial is %d",f);
}
