#include<stdio.h>
void main()
{
	int len,i,flag=1;
	char line[50],rev[50];
	printf("Enter a word:");
	scanf(" %s",line);
	for(len=0;line[len]!='\0';len++)
	{
	}
	len--;
	for(i=0;line[i]!='\0';i++)
	{
		rev[i]=line[len];
		len--;
		if(rev[i]!=line[i])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("The word is palindrome.");
	}
	else
	{
		printf("The word is not palindrome.");
	}
}
