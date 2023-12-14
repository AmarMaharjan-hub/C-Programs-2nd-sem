#include<stdio.h>
int cube(int);
void main()
{
	int cb,n;
	printf("Enter a number:");
	scanf("%d",&n);
	cb=cube(n);
	printf("The cube is:%d",cb);
}
int cube(n)
{
	return n*n*n;
}

