#include<stdio.h>
void main()
{
	int a;
	printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
	printf("Enter any number to choose from the above list:");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Sunday");
	}
	else if(a==2)
		{
			printf("Monday");			
		}
		else if(a==3)
			{
				printf("Tuesday");			
			}
			else if(a==4)
				{
					printf("Wednesday");			
				}
				else if(a==5)
					{
						printf("Thursday");			
					}
					else if(a==6)
						{
							printf("Friday");			
						}
						else if(a==2)
							{
								printf("Saturday");			
							}
							else
							{
								printf("Invalid number");
							}
}
