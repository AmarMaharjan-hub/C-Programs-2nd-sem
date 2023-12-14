#include<stdio.h>
void main()
{
	int height[20],i,n,lar;
	int *ptr;
	ptr=height;
	printf("Enter the nth term:");
	scanf("%d",&n);
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	lar=*ptr;
	for(i=0;i<n;i++)
	{
		if(lar<*(ptr+i))
		{
			lar=*(ptr+i);
		}
	}
	printf("the largest number is:%d",lar);
}
