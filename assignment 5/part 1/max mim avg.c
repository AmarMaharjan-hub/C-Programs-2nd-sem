#include<stdio.h>
void main()
{
	int i,n,a[20],max,min,sum=0;float avg;
	printf("Enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			max=a[i];
		}
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
	printf("average:%f\n",avg);
}
