#include<stdio.h>
void ascending(int *,int);
void main()
{
	int a[50],n,i;
	int *p;
	p=a;
	printf("Enter the nth term:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	ascending(p,n);
}
void ascending(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("In ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}
