#include<stdio.h>
void add(int [50][50],int [50][50],int,int);
void subtract(int [50][50],int[50][50],int,int);
void main()
{
	int a[50][50],b[50][50],i,j,m1,n1,m2,n2;
	up:
	printf("Enter the row and column of matrix A:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the row and column of matrix B:\n");
	scanf("%d%d",&m2,&n2);
	if(m1!=m2||n1!=n2)
	{
		printf("the row and column of both matrix should be equal.");
		goto up;
	}
	printf("Enter the elements of matrix A:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix B:\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	add(a,b,m1,n1);
	subtract(a,b,m1,n1);
}
void add(int a[50][50],int b[50][50],int m1,int n1)
{
	int i,j,c[50][50];
	printf("Addition\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
void subtract(int a[50][50],int b[50][50],int m1,int n1)
{
	int i,j,c[50][50];
	printf("Subtraction\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
