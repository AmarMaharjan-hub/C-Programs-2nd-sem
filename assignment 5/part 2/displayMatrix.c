#include<stdio.h>
void main()
{
	int i,j,matrix[3][3];
	printf("Enter the elements of the 3X3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements of matrix:");
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
