#include<stdio.h>
#include<string.h>
void main()
{
	int i,j;
	char alphabets[10][50],temp[50];
	printf("Enter 10 words:\n");
	for(i=0;i<10;i++)
	{
		gets(alphabets[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(alphabets[i],alphabets[j])>0)
			{
				strcpy(temp,alphabets[i]);
				strcpy(alphabets[i],alphabets[j]);
				strcpy(alphabets[j],temp);	
			}	
		}
	}
	printf("list in alphabetical order :\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",alphabets[i]);
	}
}
