#include<stdio.h>
void main()
{
	int i;
	char text[50];
	printf("Enter a text:");
	scanf(" %[^\n]",text);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]=='a'||text[i]=='A'||text[i]=='e'||text[i]=='E'||text[i]=='i'||text[i]=='I'||text[i]=='o'||text[i]=='O'||text[i]=='u'||text[i]=='U')
		{
			text[i]='*';
		}
	}
	printf("The vowels are changed to '*'\n%s",text);
}
