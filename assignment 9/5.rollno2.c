#include<stdio.h>
struct student
{
	int roll_no,age;
	char name[30];
}s[5];
void main()
{
	int i;
	printf("Enter the details of the students:\n\n");
	for(i=0;i<5;i++)
	{
		s[i].roll_no=i+1;		
		printf("roll no:%d\n",i+1);
		printf("name:");
		scanf(" %[^\n]",s[i].name);
		printf("age:");
		scanf("%d",&s[i].age);
	}
	printf("Details of roll no:2\n");
	printf("name:%s\nage:%d\n",s[1].name,s[1].age);
}
