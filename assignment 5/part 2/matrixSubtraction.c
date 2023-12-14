#include<stdio.h>
void main()
{
	int i,j,matrix_1[3][4],matrix_2[3][4],matrix_3[3][4];
	printf("Enter the elements of the 3X4 matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("R(%d) C(%d) of matrix A:",i+1,j+1);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	printf("\n\n");
	printf("Enter the elements of the 3X4 matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("R(%d) C(%d) of matrix B:",i+1,j+1);
			scanf("%d",&matrix_2[i][j]);
		}
	}
	printf("\n\n");
	printf("Matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix_1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix_2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Matrix C=A-B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			matrix_3[i][j]=matrix_1[i][j]-matrix_2[i][j];
			printf("%d\t",matrix_3[i][j]);
		}
		printf("\n");
	}
}
