#include<stdio.h>
void read();
//void largest(int []);
void smallest(int []);
void main()
{
	printf("Enter 5 numbers:\n");
	read();
}
void read()
{
	int array[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
//	largest(array);
	smallest(array);
}
/*void largest(int a[])
{
	int i,j=a[0];
	for(i=1;i<5;i++)
	{
		if(j<a[i])
		{
			j=a[i];
		}
	}
	printf("The largest number is:%d",j);
}*/
void smallest(int a[])
{
	int i,j=a[0];
	for(i=1;i<5;i++)
	{
		if(j>a[i])
		{
			j=a[i];
		}
	}
		printf("\nThe smallest number is:%d",j);
}
