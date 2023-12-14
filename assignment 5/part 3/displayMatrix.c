#include<stdio.h>
void read(int,int);
void display(int [50][50],int,int);
void main()
{
	int m,n;
	printf("Enter the size of the matrix:\n");
	scanf("%d%d",&m,&n);
	read(m,n);
}
void read(int m,int n)
{
	int i,j,mat[50][50];
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	display(mat,m,n);
}
void display(int mat[50][50],int m,int n)
{
	int i,j;
	printf("matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}

