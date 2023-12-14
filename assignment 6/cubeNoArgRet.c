#include<stdio.h>
int cube();
void main()
{
	int cb;
	cb=cube();
	printf("The cube is:%d",cb);
}
int cube()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	return n*n*n;
}

