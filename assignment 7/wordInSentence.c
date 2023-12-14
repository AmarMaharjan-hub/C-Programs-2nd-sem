#include<stdio.h> 
void main()
{
	int i,len1,len2,j=0,c=0,b;
	char line[50],word[50];
	printf("Enter a sentence:");
	scanf(" %[^\n]",line);
	for(len1=0;line[len1]!='\0';len1++)
	{
	}
	printf("Enter a word to search:");
	scanf(" %s",word);
	for(len2=0;word[len2]!='\0';len2++)
	{
	}
	len2--;
	for(i=0;i<len1;i++)
	{
		if(line[i]==word[j])
		{
			if(j==len2)
			{
				c=1;
				break;
			}
			j++;
			continue;
		}
		
		
			j=0;
		
	}
	if(c==1)
	{
		printf("The word is present in the sentence.");
	}
	else
	{
		printf("The word is not present the sentence.");
	}
}
