#include<stdio.h>
void main()
{
	int row_1,row_2,i,j,k,col_1,col_2,mat_1[50][50],mat_2[50][50],mat_3[50][50],sum=0;
	printf("Matrix Multipication\n\n");
	upper:
	printf("Enter row of matrix A:");
	scanf("%d",&row_1);
	printf("Enter column of matrix A:");
	scanf("%d",&col_1);
	printf("Enter row of matrix B:");
	scanf("%d",&row_2);
	printf("Enter column of matrix B:");
	scanf("%d",&col_2);
	if(col_1!=row_2)
	{
		printf("the colulmn of first matrix and row of second matrix should be equal for matrix multipication.\n");
		goto upper;
	}
	printf("The multiplied matrix will be of size %dX%d",row_1,col_2);
	printf("\nEnter the elements of matrix A:\n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf("R%d C%d:",i+1,j+1);
			scanf("%d",&mat_1[i][j]);
		}
	}
	printf("\nEnter the elements of matrix B:\n");
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf("R%d C%d:",j+1,i+1);
			scanf("%d",&mat_2[i][j]);
		}
	}
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
