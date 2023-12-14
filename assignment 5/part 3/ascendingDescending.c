#include<stdio.h>
void ascending(int [],int);
void descending(int [],int);
void main()
{
	int i,a[50],nth;
	printf("Enter the nth number:");
	scanf("%d",&nth);
	printf("Enter the number:\n");
	for(i=0;i<nth;i++)
	{
		scanf("%d",&a[i]);
	}
	ascending(a,nth);
	descending(a,nth);
}
void ascending(int a[],int nth)
{
	int i,j,temp;
	for(i=0;i<nth;i++)
	{
		for(j=i+1;j<nth;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			printf("%d\t",a[i]);
	}
	/*printf("ascending:\n");
	for(i=0;i<nth;i++)
	{
		printf("%d\t",a[i]);
	}*/
}
void descending(int a[],int nth)
{
	int i,j,temp;
	for(i=0;i<nth;i++)
	{
		for(j=i+1;j<nth;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\ndescending:\n");
	for(i=0;i<nth;i++)
	{
		printf("%d\t",a[i]);
	}
}
