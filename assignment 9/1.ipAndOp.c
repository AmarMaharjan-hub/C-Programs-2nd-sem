#include<stdio.h>
struct student
{
	int roll_no,age,marks;
	char name[30];
};
void main()
{
	struct student s;
	printf("Enter the roll no of the student:");
	scanf("%d",&s.roll_no);
	printf("Enter the name of the student:");
	scanf(" %[^\n]",s.name);
	printf("Enter the age of the student:");
	scanf("%d",&s.age);
	printf("Enter the marks of the student:");
	scanf("%d",&s.marks);
	printf("\n\nThe details of the student are:\n");
	printf("roll no:%d\nname:%s\nage:%d\nmarks:%\n",s.roll_no,s.name,s.age,s.marks);
}
