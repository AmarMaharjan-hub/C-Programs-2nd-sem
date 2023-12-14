#include<stdio.h>
int square(int);
void main()
{
	int a,sq;
	printf("Enter a number:");
	scanf("%d",&a);
	sq=square(a);
	printf("The square is:%d",sq);
}
int square(s)
{
	return s*s;
}
