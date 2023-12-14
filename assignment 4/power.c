#include<stdio.h>
void main()
{
	int x,y,i,m=1;
	printf("Enter two number:\n");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
	{
		m*=x;
	}
	printf("the power of the number is:%d",m);
}
