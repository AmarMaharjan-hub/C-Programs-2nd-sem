#include<stdio.h>
struct employee
{
	int emp_id,emp_salary;
	char emp_name[30],emp_post[30];
};
void main()
{
	struct employee s;
	printf("Enter the ID of the employee:");
	scanf("%d",&s.emp_id);
	printf("Enter the name of the employee:");
	scanf(" %[^\n]",s.emp_name);
	printf("Enter the post of the employee:");
	scanf(" %[^\n]",&s.emp_post);
	printf("Enter the salary of the employee:");
	scanf("%d",&s.emp_salary);
	printf("\n\nThe details of the employee are:\n");
	printf("ID:%d\nname:%s\npost:%s\nsalary:%d\n",s.emp_id,s.emp_name,s.emp_post,s.emp_salary);
}
