#include<stdio.h>
void main()
{
	int a[10],nth,i,b,c;
	for(i=0;i<10;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&a[i]);
	}
	b=a[0];
	c=a[0];
	for(i=1;i<10;i++)
	{
		if(b<a[i])
		{
			b=a[i];
		}
		if(c>a[i])
		{
			c=a[i];
		}

	}
	printf("The largest number is:%d\n",b);
	printf("The smallest number is:%d",c);
}
