#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter two numbers:\n");
	scanf("%d%d",p,q);
	swap(p,q);
}
void swap(int *p,int *q)
{
	int temp;
	temp=*q;
	*q=*p;
	*p=temp;
	printf("The swapped numbers are:\n");
	printf("%d\n%d",*p,*q);
}
