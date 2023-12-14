#include<stdio.h>
union memb{
	char firstname[20];
	char middlename[20];
	char lastname[20];
}name;
void main()
{
	printf("Enter your firstname:");
	scanf(" %[^\n]",name.firstname);
	printf("your first name is:%s\n\n",name.firstname);
	printf("Enter your middlename:");
	scanf(" %[^\n]",name.middlename);
	printf("your middle name is:%s\n\n",name.middlename);
	printf("Enter your lastname:");
	scanf(" %[^\n]",name.lastname);
	printf("your last name is:%s\n\n",name.lastname);
}
