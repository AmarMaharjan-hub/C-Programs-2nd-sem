#include<stdio.h>
void main()
{
	int a,rem,sum=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		sum+=rem;
		a/=10;
	}
	printf("The sum is:%d",sum);
}
