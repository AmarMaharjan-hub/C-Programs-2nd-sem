#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,nc;
	char c[4];
	printf("Enter a four digit number:");
	scanf("%d",&n);
	nc=n;
	itoa(n,c,10);		//Here 10 means the decimal.
	printf("Integer to words.\n");
	for(i=0;i<4;i++)
	{
		printf("%c\n",c[i]);
	}
}
