#include<stdio.h>
struct rainfall
{
	int month[6];	
}city[5];
void main()
{
	int i,j;
	printf("1st city:Kathmandu\t\t1st month:Janurary\n2nd city:New Delhi\t\t2nd month Februray\n3rd city:Bankok\t\t\t3rd month:March\n");
	printf("4th city:Tokyo\t\t\t4th month:April\n5th city:Colombo\t\t5th month:May\n\t\t\t\t6th month:June");
	printf("\n\nEnter the rainfall of the first half year:\n\n");
	for(i=0;i<5;i++)
	{
		printf("Rainfall in the %dth city:\n",i+1);
		for(j=0;j<6;j++)
		{
			printf("%dth month:",j+1);
			scanf("%d",&city[i].month[j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	printf("\t\t\t\"Rainfall of the first half of year\"\n\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tJan\tFeb\tMar\tApr\tMay\tJun\n");
	printf("--------------------------------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		switch(i)
		{
			case 0:
				{
					printf("Kathmandu\t");
					break;
				}
			case 1:
				{
					printf("New Delhi\t");
					break;
				}
			case 2:
				{
					printf("Bankok    \t");
					break;
				}
			case 3:
				{
					printf("Tokyo     \t");
					break;
				}
			case 4:
			{
				printf("Colombo   \t");
				break;
			}
		}
		for(j=0;j<6;j++)
		{
			printf("%d\t",city[i].month[j]);
		}
		printf("\n");
	}
	printf("--------------------------------------------------------------------------------\n");
}
