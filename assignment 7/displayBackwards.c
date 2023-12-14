#include<stdio.h>
void main()
{
	int i,len;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(len=0;line[len]!='\0';len++)
	{
	}
	len--;
	printf("line in back backwards:\n");
	for(i=len;i>=0;i--)
	{
		printf("%c",line[i]);
	}
}
