#include<stdio.h>
void main()
{
	int a[20],i,n,o=0,e=0;
	printf("enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("The number of odd is %d\n",o);
	printf("The number of even is %d",e);
}
