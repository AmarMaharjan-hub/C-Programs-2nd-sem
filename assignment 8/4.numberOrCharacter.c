#include<stdio.h>
void main()
{
	char a;
	char *ptr;
	printf("Enter anything:");
	scanf("%c",&a);
	ptr=&a;
	if(*ptr>=65 && *ptr<=90 || *ptr>=97 && *ptr<=122)
	{
		printf("%c is a character",*ptr);
	}
	else if(*ptr>=48 && *ptr<=57)
	{
		printf("%c is a number",*ptr);
	}	
	else
	{
		printf("%c is neither a number nor a character.",*ptr);
	}
}
