#include<stdio.h>
void main()
{
	int i;
	for(i=1900;i<=2000;i++)
	{
		if(i%4==0)
		{
			if(i%100==0)
			{
				if(i%400==0)
				{
					printf("%d\t",i);
				}
			}
			else
			{
				printf("%d\t",i);
			}
		}
	}
}
