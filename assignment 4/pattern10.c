/*		pattern 10
       1
	  22
	 333
	4444
   55555*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)//i=1 because it helps to make the pattern.
	{
		for(j=5;j>i;j--)//for the white spaces.
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)//for the pattern.
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
