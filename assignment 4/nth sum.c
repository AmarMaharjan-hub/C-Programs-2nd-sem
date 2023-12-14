#include<stdio.h>
void main()
{
	int a,i,s=0;
	printf("Using for loop\n");
	printf("enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s+=i;
	}
	printf("sum is %d",s);
	
	printf("\nusing while loop");
	printf("\nenter a number:");
	scanf("%d",&a);
	i=1;
	s=0;
	while(i<=a)
	{
		s+=i;
		i++;
	}
	printf("sum is %d",s);
	
	printf("\nusing do while loop");
	printf("\nenter a number:");
	scanf("%d",&a);
	i=1;
	s=0;
	do
	{
		s+=i;
		i++;
	}while(i<=a);
	printf("sum is %d",s);
	
}
