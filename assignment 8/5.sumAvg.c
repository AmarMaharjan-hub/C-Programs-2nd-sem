#include<stdio.h>
void main()
{
	int sum=0,n,i;
	int *ptr;
	float avg;
	printf("Enter the vlue of n:");
	scanf("%d",&n);
	ptr=&n;
	for(i=1;i<=*ptr;i++)
	{
		sum+=i;
	}
	printf("\nThe sum is:%d",sum);
	avg=(float)sum/(*ptr);
	printf("\nThe average is:%f",avg);
}
