#include<stdio.h>
void main()
{
	int i;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a' && line[i+1]=='n')
		{
			line[i]='#';
			line[i+1]='#';
		}
	}
	printf("The modified string is\n%s",line);
}
