#include<stdio.h>
void main()
{
	int i;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]>=65 && line[i]<=90)
		{
			line[i]=line[i]+32;
		}
		else if(line[i]>=97 && line[i]<=122)
				{
					line[i]=line[i]-32;
				}
	}
	printf("The lowercase and the uppercase are swapped\n%s",line);
}
