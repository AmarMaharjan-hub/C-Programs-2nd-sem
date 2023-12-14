#include<stdio.h>
void read();
void display(int a[]);
void main()
{
	read();
	//display();
}
void read()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a);
}
void display(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
