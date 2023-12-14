#include<stdio.h>
#include<string.h>
void count();
void concatenate();
void copy();
void swap();
void compare();
void main()
{
	count();
	concatenate();
	copy();
	swap();
	compare();
}
void count()
{
	printf("To count length of string:\n");
	int len;
	char line[50];
	printf("Enter a line:");
	gets(line);
	len=strlen(line);
	printf("The length of the string is:%d\n",len);
}
void concatenate()
{
	printf("To concatenate two strings:\n");
	char line1[50],line2[50],cat[100];
	printf("Enter first line:");
	gets(line1);
	printf("Enter second line:");
	gets(line2);
	strcat(line1,line2);
	printf("After concatenation\n%s\n",line1);
}
void copy()
{
	printf("to copy one string to another.\n");
	char line[50],cpy[50];
	printf("Enter a line:");
	gets(line);
	strcpy(cpy,line);
	printf("String coied:\n%s\n",cpy);
}
void swap()
{
	printf("To swap two strings.\n");
	int i,len;
	char line[50],temp,swp[50];
	printf("Enter first line:");
	gets(line);
	printf("Enter second line:");
	gets(swp);
	for(i=0;line[i]!='\0';i++)
	{
		temp=line[i];
		line[i]=swp[i];
		swp[i]=temp;
		
	}
	printf("strings swapped\nfirst string:%s\nsecond string%s\n",line,swp);
}
void compare()
{
	printf("To compare two strings:\n");
	int i;
	char line1[50],line2[50];
	printf("Enter first line:");
	gets(line1);
	printf("Enter second line:");
	gets(line2);
	i=strcmp(line1,line2);
	if(i==0)
	{
		printf("The strings are equal.");
	}
	else if(i>0)
	{
		printf("The first string is greater than second.");
	}
	else 
	{
		printf("The second string is greater than first.");
	}
}
