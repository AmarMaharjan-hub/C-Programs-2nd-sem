#include<stdio.h>
void main()
{
	int i;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	printf("The line you entered are:\n");
	for(i=0;line[i]!='\0';i++)
	{
		printf("%c\n",line[i]);
	}
}
