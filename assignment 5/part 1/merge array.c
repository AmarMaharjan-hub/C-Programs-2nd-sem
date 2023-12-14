#include<stdio.h>
void main()
{
	int nth_1,nth_2,i,num_1[50],num_2[50],j,nth_3,num_3[100];
	printf("Enter the nth term of first array(nth<50):");
	scanf("%d",&nth_1);
	for(i=0;i<nth_1;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&num_1[i]);
	}
	printf("Enter the nth term of second array(nth<50):");
	scanf("%d",&nth_2);
	for(i=0;i<nth_2;i++)
	{
		printf("Enter the %dth number:",i+1);
		scanf("%d",&num_2[i]);
	}
	for(i=0;i<nth_1;i++)
	{
		num_3[i]=num_1[i];
	}
	for(j=0;j<nth_2;j++)
	{
		num_3[i]=num_2[j];
		i++;
	}
	nth_3=nth_1+nth_2;
	printf("Elements of third array after merging first and second array are:\n");
	for(i=0;i<nth_3;i++)
	{
		printf("%d\n",num_3[i]);
	}
}
