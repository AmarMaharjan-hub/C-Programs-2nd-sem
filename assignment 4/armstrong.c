#include<stdio.h>
void main()
{
	int num,copy,rem,sum=0,cube;
	printf("Enter a number:");
	scanf("%d",&num);
	copy=num;
	while(num!=0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		sum+=cube;
		num/=10;
	}
	if(sum==copy)
	printf("The number is armstrong");
	else
	printf("The number is not armstrong");
}
