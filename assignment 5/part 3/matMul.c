#include<stdio.h>
void mul(int [50][50],int [50][50],int,int,int,int);
void main()
{
	int row_1,row_2,i,j,col_1,col_2,mat_1[50][50],mat_2[50][50];
	printf("Matrix Multipication\n\n");
	upper:
	printf("Enter row and column of matrix A:\n");
	scanf("%d%d",&row_1,&col_1);
	printf("Enter row and column of matrix B:\n");
	scanf("%d%d",&row_2,&col_2);
	if(col_1!=row_2)
	{
		printf("the colulmn of first matrix and row of second matrix should be equal for matrix multipication.\n");
		goto upper;
	}
	printf("\nEnter the elements of matrix A:\n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			scanf("%d",&mat_1[i][j]);
		}
	}
	printf("\nEnter the elements of matrix B:\n");
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			scanf("%d",&mat_2[i][j]);
		}
	}
	mul(mat_1,mat_2,row_1,col_1,row_2,col_2);
}
void mul(int mat_1[50][50],int mat_2[50][50],int row_1,int col_1,int row_2,int col_2)
{
	int i,j,k,sum=0,mat_3[50][50];
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_2;j++)
		{
			for(k=0;k<row_2;k++)
			{
				sum=sum+mat_1[i][k]*mat_2[k][j];
			}
			mat_3[i][j]=sum;
			sum=0;
		}
	}
	printf("Product of matrices:\n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf("%d\t",mat_3[i][j]);
		}
		printf("\n");
	}
}
