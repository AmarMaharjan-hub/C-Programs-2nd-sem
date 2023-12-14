#include <stdio.h>
void main()
{
	int a[20],b[20],c[20],i,n,count1=0,count2=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[count1]=a[i];
			count1++;
		}
		else
		{
			c[count2]=a[i];
			count2++;
		}
	}
	printf("Even numbers are:");
	for(i=0;i<count1;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nOdd numbers are:");
	for(i=0;i<count2;i++)
	{
		printf("%d\t",c[i]);
	}

}
