#include<stdio.h>
void main()
{
	int a,b,i=1;
	while(i==1)
	{
		printf("Enter two numbers:\n");
		scanf("%d%d",&a,&b);
		printf("The sum is:%d\n\n",a+b);
		printf("Do you want to continue?\n1=Yes\n0=No\nEnter youor choice:");
		scanf("%d",&i);
		if(i!=1&&i!=0)
		{
			printf("\n\nSorry you've enterd an invalid number!!!");
		}
	}
}
