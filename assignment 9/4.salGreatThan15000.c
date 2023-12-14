#include<stdio.h>
struct employee
{
	int emp_id,emp_salary;
	char emp_name[30],emp_post[30];
};
void main()
{
	struct employee s[5];
	int i;
	for(i=0;i<5;i++)
	{
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
	printf("Employee with salary greater than 15000:");
	for(i=0;i<5;i++)
	{
		if(s[i].emp_salary>15000)
		{
			printf("ID:%d\nname:%s\npost:%s\nsalary:%d\n\n",s[i].emp_id,s[i].emp_name,s[i].emp_post,s[i].emp_salary);
		}
	}
}
