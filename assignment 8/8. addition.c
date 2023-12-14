#include<stdio.h>
void main()
{
	int a[10],b[10],c[50],i;
	int *p,*q,*r;
	p=a;
	q=b;
	r=c;
	printf("Enter elements of A:");
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nEnter elements of B:");
	for(i=0;i<10;i++)
	{
		scanf("%d",q+i);
	}
	printf("\nElements in C:\n");
	for(i=0;i<10;i++)
	{
		*(r+i)=*(p+i)+*(q+i);
		printf("%d\t",*(r+i));
	}
}
