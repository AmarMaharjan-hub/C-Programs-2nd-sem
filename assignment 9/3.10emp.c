#include<stdio.h>
struct employee
{
	int emp_id,emp_salary;
	char emp_name[30],emp_post[30];
};
void main()
{
	struct employee s[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter the details of %dth person:\n",i+1);
		printf("ID:");
		scanf("%d",&s[i].emp_id);
		printf("name:");
		scanf(" %[^\n]",s[i].emp_name);
		printf("post:");
		scanf(" %[^\n]",&s[i].emp_post);
		printf("salary:");
		scanf("%d",&s[i].emp_salary);
		printf("\n");
	}
	printf("\n\nThe details of the employee are:\n");
	for(i=0;i<10;i++)
	{
		printf("ID:%d\nname:%s\npost:%s\nsalary:%d\n\n",s[i].emp_id,s[i].emp_name,s[i].emp_post,s[i].emp_salary);
	}
}
