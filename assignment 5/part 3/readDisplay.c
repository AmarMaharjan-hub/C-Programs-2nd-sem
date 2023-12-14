#include<stdio.h>
void read();
void display(int []);
void main()
{
	printf("Enter 5 numbers:\n");
	read();
}
void read()
{
	int i,array[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	display(array);
}
void display(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
