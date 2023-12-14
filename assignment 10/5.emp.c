#include<stdio.h>
struct employee
{
	char name[50],post[50];
	int salary;
}emp;
void main()
{
	FILE *fp;
	printf("Enter the details of the employee:\n");
	fp=fopen("employee.dat","w");
	printf("name:");
	scanf(" %[^\n]",emp.name);
	printf("post:");
	scanf(" %[^\n]",emp.post);
	printf("salary:");
	scanf("%d",&emp.salary);
	if((fprintf(fp,"%s%s%d",emp.name,emp.post,emp.salary))!=NULL)
	{
		printf("record added sucessfully");
	}
	fclose(fp);
}
