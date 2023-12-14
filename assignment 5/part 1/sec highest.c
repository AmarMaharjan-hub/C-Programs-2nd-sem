#include<stdio.h>
void main()
{
	int a[50],nth,i,temp,j;
	printf("Enter the nth number(nth<50):");
	scanf("%d",&nth);
	for(i=0;i<nth;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&a[i]);
	}
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
	for(i=1;i<nth;i++)
	{
		if(a[0]>a[i])
		{
			printf("second largest number is:%d",a[i]);
			break;
		}
	}
	
}
