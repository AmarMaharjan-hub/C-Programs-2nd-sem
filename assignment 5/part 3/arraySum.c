#include<stdio.h>
void read(int);
void sum(int [],int [],int);
void display(int [],int);
void main()
{
	int n;
	printf("Enter the nth number:");
	scanf("%d",&n);
	read(n);
}
void read(int nth)
{
	int n1[50],n2[50],i;
	printf("Enter the elements of the first array:\n");
	for(i=0;i<nth;i++)
	{
		scanf("%d",&n1[i]);
	}
	printf("Enter the elements of the second array:\n");
	for(i=0;i<nth;i++)
	{
		scanf("%d",&n2[i]);
	}
	sum(n1,n2,nth);
}
void sum(int n1[],int n2[], int nth)
{
	int i,n3[50];
	for(i=0;i<nth;i++)
	{
		n3[i]=n1[i]+n2[i];
	}
	display(n3,nth);
}
void display(int n3[],int nth)
{
	int i;
	printf("sum:\n");
	for(i=0;i<nth;i++)
	{
		printf("%d\t",n3[i]);
	}
}
