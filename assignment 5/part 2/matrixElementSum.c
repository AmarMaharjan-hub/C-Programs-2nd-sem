#include<stdio.h>
void main()
{
	int i,j,matrix[3][3],sum=0;
	printf("Enter the elements of the 3X3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements of matrix:");
			scanf("%d",&matrix[i][j]);
			sum+=matrix[i][j];
		}
	}
	printf("the sum of each element of matrix:%d",sum);
}
