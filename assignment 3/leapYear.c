#include<stdio.h>
void main()
{
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			{
				printf("The year is a leapyear");
			}
			else
			{
				printf("The year is not a leapyear");		
			}
			
		}
		else
		{
			printf("The year is a leapyear");
		}
	}
	else
	{
		printf("The year is not a leapyear");
	}
	
}

