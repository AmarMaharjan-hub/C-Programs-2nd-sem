#include<stdio.h>
void main()
{
	int i,vowel=0,consonant=0;
	char line[50];
	printf("Enter a line:");
	scanf(" %[^\n]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a'||line[i]=='A'||line[i]=='e'||line[i]=='E'||line[i]=='i'||line[i]=='I'||line[i]=='o'||line[i]=='O'||line[i]=='u'||line[i]=='U')
		{
			vowel++;
		}
		else if(line[i]>=65 && line[i]<=90 || line[i]>=97 && line[i]<=122)
		{
			consonant++;
		}
	}
	printf("There are %d vowels, %d consonants",vowel,consonant);
}
