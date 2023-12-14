#include<stdio.h>
void main()
{
	int n,m,i,a[10],b[10],j,sum,c[10];
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of second array:");
	scanf("%d",&m);
	printf("Enter the numbers:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<m;j++)
	{
		c[i]=b[j];
		i++;
	}
	sum=n+m;
	printf("Elements of third array after merging first and second array are:\n");
	for(i=0;i<sum;i++)
	{
		printf("%d\n",c[i]);
	}
}
