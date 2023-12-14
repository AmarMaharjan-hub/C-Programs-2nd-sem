#include<stdio.h>
void main()
{
	int i,space=0;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ')
		{
			space++;
		}
	}
	printf("There are %d word\n",space+1);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ')
		{
			printf("\n");
			continue;
		}
		printf("%c",line[i]);
	}
}
