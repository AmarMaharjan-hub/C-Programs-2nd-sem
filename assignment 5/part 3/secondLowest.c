#include<stdio.h>
void secondLowest(int [],int);
void main()
{
	int a[50],nth,i;
	printf("Enter the nth student(nth<50):");
	scanf("%d",&nth);
	for(i=0;i<nth;i++)
	{
		scanf("%d",&a[i]);
	}
	secondLowest(a,nth);
}
void secondLowest(int a[],int nth)
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
	}
	for(i=1;i<nth;i++)
	{
		if(a[0]<a[i])
		{
			printf("second lowest age is:%d",a[i]);
			break;
		}
	}
}
