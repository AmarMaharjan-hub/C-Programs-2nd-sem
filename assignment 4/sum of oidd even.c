#include<stdio.h>
void main()
{
	int i,so=0,se=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			se+=i;
		}
		else
		{
			so+=i;
		}
	}
	printf("the sum of odd number is %d",so);
	printf("\nthe sum of even number is %d",se);
}
