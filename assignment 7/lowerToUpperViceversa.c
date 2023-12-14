#include<stdio.h>
void main()
{
	int i,len;
	char text[50];
	printf("Enter a text:");
	scanf(" %[^\n]",text);
	for(len=0;text[len]!='\0';len++)
	{
	}
	if(text[0]>=97 && text[0]<=122)
	{
		for(i=0;i<len;i++)
		{
			if(text[i]>=97 && text[i]<=122)
			{
				text[i]-=32;
			}
		}
		printf("Since the first character is in lowercase the text has been converted into uppercase:\n%s",text);
	}
	else if(text[0]>=65 && text[0]<=90)
	{
		for(i=0;i<len;i++)
		{
			if(text[i]>=65 && text[i]<=90)
			{
				text[i]+=32;
			}
		}
		printf("Since the first character is in uppercase the text has been converted into lowercase:\n%s",text);
	}
}
