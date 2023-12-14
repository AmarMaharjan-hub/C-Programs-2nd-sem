#include<stdio.h>
void main()
{
	int i,j,matrix_1[3][3],matrix_2[3][3];
	printf("Enter the elements of the 3X3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements of matrix:");
			scanf("%d",&matrix_1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matrix_2[i][j]=matrix_1[i][j];
			if(matrix_2[i][j]<5)
			{
				matrix_2[i][j]=15;
			}
			printf("%d\t",matrix_2[i][j]);
		}
		printf("\n");
	}
}
