#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	char s_name[5][20];
	int marks[5];
	int total;
};
void main()
{
	int i,j,tot=0;
	float avg[5],avg_c,percent;
	struct student std[5];
	struct student temp;
	for(i=0;i<5;i++)
	{
		printf("%dth Subject: ",i+1);
		scanf(" %[^\n]",std[0].s_name[i]);
		for(j=1;j<5;j++)
		{
			strcpy(std[j].s_name[i],std[0].s_name[i]);
		}
	}
	printf("\n\n");
	printf("Enter details of student:\n");
	for(i=0;i<5;i++)
	{
		std[i].total=0;
		printf("Roll: ");
		scanf("%d",&std[i].roll);
		printf("Name: ");
		scanf(" %[^\n]",std[i].name);
		printf("Marks:\n");
		for(j=0;j<5;j++)
		{
			printf("%s: ",std[i].s_name[j]);
			scanf("%d",&std[i].marks[j]);
			std[i].total+=std[i].marks[j];
		}
		avg[i]=(float)std[i].total/5;
		printf("\n");
	}
	printf("\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("| Roll |   \tName\t   \t|   C   | Eng\t| Math\t| Mgmt\t|Sanskrit|\n");
	printf("-------------------------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("|%d     |",std[i].roll);
		if(strlen(std[i].name)<9)
		{
			printf("%s\t\t\t|",std[i].name);
		}
		else
		{
			printf("%s\t|",std[i].name);
		}
		for(j=0;j<5;j++)
		{
			printf(" %d\t|",std[i].marks[j]);
		}
		printf("\n");
		printf("-------------------------------------------------------------------------\n");
	}
	printf("\n\n");
	printf("total of:\n");
	for(i=0;i<5;i++)
	{
		printf("%s : %d\n",std[i].name,std[i].total);
	}
	printf("\n\n");
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(std[i].total<std[j].total)
			{
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;			
			}
		}
	}
	printf("-------------------------------------------------------------------------\n");
	printf("| Roll |   \tName\t   \t|   C   | Eng\t| Math\t| Mgmt\t|Sanskrit|\n");
	printf("-------------------------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("|%d     |",std[i].roll);
		if(strlen(std[i].name)<9)
		{
			printf("%s\t\t\t|",std[i].name);
		}
		else
		{
			printf("%s\t|",std[i].name);
		}
		for(j=0;j<5;j++)
		{
			printf(" %d\t|",std[i].marks[j]);
		}
		printf("\n");
		printf("-------------------------------------------------------------------------\n");
	}
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		tot+=std[i].marks[0];
	}
	avg_c=(float)tot/5;
	printf("The average marks in c programming is:%f\n\n",avg_c);
	for(i=0;i<5;i++)
	{
		if(strcmp(std[i].name,"Nabaraj Pandey")==0)
		{
			percent=(float)std[i].total/500*100;
			printf("Precentage of Nabraj is: %f\n\n",percent);
		}
	}
	printf("Topper: %s\n\n",std[0].name);
	printf("Average marks of students are:\n");
	for(i=0;i<5;i++)
	{
		printf("%s : %f\n",std[i].name,avg[i]);
	}
}
