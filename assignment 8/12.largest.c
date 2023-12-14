#include<stdio.h>
int largest(int *,int);
void main()
{
	int a[50],i,l,n;
	int *p;
	p=a;
	printf("Enter the nth number:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	l=largest(p,n);
	printf("The largest number is:%d",l);
}
int largest(int *p,int n)
{
	int l,i;
	l=*p;
	for(i=0;i<n;i++)
	{
		if(l<*(p+i))
		{
			l=*(p+i);
		}
	}
	return l;
}
