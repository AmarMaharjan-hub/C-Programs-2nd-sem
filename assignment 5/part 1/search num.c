#include<stdio.h>
void main()
{
	int a[50],nth,i,g,b=1;
	printf("Enter the nth number:");
	scanf("%d",&nth);
	for(i=0;i<nth;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a number to find:");
	scanf("%d",&g);
	for(i=0;i<nth;i++)
	{
		if(g==a[i])
		{
			printf("number found");
			b=0;
			break;
		}
	}
	if(b==1)
	{
		printf("number not found");
	}
}
