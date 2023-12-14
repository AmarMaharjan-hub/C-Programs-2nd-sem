#include<stdio.h>
struct employee{
	char name[50];
	int salary,hours;
}emp[3];
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("employee %d\n",i+1);
		printf("name:");
		scanf(" %[^\n]",emp[i].name);
		printf("salary:$");
		scanf("%d",&emp[i].salary);
		printf("hours of work per day:");
		scanf("%d",&emp[i].hours);
		printf("\n\n");
		if(emp[i].hours>12)
		{
			emp[i].salary+=150;
		}else if(emp[i].hours>10)
		{
			emp[i].salary+=100;
		}
		else if(emp[i].hours>8)
		{
			emp[i].salary+=50;
		}
	}
	printf("The final salaries of employees are:\n");
	for(i=0;i<3;i++)
	{
		printf("name:%s\nsalary:%d\nhours of work per day:%d\n\n",emp[i].name,emp[i].salary,emp[i].hours);
	}
	
}
