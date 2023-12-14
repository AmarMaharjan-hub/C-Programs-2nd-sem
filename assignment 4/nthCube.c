#include<stdio.h>
void main()
{
	int i,cube,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		cube=i*i*i;
		if(cube%3==0)
		{
			printf("The cube of %d is %d which is exactly divisible by 3\n",i,cube);
		}
	}
}
