#include<stdio.h>
void main()
{
	int i,letters=0,digits=0,whiteSpace=0;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]>=48 && line[i]<=57)
		{
			digits++;
		}
		else if(line[i]>=65 && line[i]<=90 || line[i]>=97 && line[i]<=122)
		{
			letters++;
		}
		else if(line[i]==' ')
		{
			whiteSpace++;
		}
	}
	printf("There are %d letters, %d digits, %d white spaces",letters,digits,whiteSpace);
}
