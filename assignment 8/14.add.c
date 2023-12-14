#include<stdio.h>
void add(int *,int *,int *);
void main()
{
	int a[10],b[10],c[10],i;
	int *at,*bt,*ct;
	at=a;
	bt=b;
	ct=c;
	printf("Enter the elements of A:");
	for(i=0;i<10;i++)
	{
		scanf("%d",at+i);
	}
	printf("\nEnter the elements of B:");
	for(i=0;i<10;i++)
	{
		scanf("%d",bt+i);
	}
	add(at,bt,ct);
}
void add(int *at,int *bt, int *ct)
{
	int i;
	printf("\nElements in C:\n");
	for(i=0;i<10;i++)
	{
		*(ct+i)=*(at+i)+*(bt+i);
		printf("%d\t",*(ct+i));
	}
}
