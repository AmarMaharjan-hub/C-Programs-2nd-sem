#include<stdio.h>
void main()
{
	int a[10],nth,i,temp,j;
	for(i=0;i<10;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&a[i]);
	}
	printf("ascending order\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{ 
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("decending order\n");
		for(i=9;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
