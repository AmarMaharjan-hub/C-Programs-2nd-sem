/*		pattern 11
		A
		BB
		CCC
		DDDD
		EEEEE*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",i+64);
		}
		printf("\n");
	}
}