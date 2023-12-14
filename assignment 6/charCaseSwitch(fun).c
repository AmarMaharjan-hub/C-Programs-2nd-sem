#include<stdio.h>
char change(char);
void main()
{
	char a,b;
	printf("Enter a character:");
	scanf("%c",&a);
	b=change(a);
	if(b>=97&&b<=122)
	{
		printf("The lowercase is %c",b);
	}
	else  if(b>=65&&b<=90)
			{
				printf("The uppercase is %c",b);
			}
			else
			{
				printf("The input is not a character.");
			}
}
char change(char c)
{
	if(c>=97&&c<=122)
	{
		c-=32;
	}
	else if(c>=65&&c<=90)
		{
			c+=32;
		}
	return c;
}
