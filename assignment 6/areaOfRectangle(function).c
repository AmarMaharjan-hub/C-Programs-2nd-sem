#include<stdio.h>
void getArea();
void main()
{
	getArea();
}
void getArea()
{
	int l,b,a;
	printf("Enter the length and breadth:\n");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("The area is:%d",a);
}
