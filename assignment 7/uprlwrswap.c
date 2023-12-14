#include<stdio.h>
void main()
{
	int i;
	char text[50];
	printf("Enter a text:");
	gets(text);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>=65 && text[i]<=90)
		{
			text[i]+=32;
		}
		else if(text[i]>=97 && text[i]<=122)
		{
			text[i]-=32;
		}
	}
	printf("the uppercase and the lower case have been swapped:\n%s",text);
}
