//question no 2
#include<stdio.h>
void main()
{
	int i;
	printf("Using while loop\n");
	i=201;
	while(i<=299)
	{
		printf("%d\t",i);
		i++;
	}
	
	
	printf("\nusing do while loop\n");
	i=201;
	do
	{
		printf("%d\t",i);
		i++;
	}while(i<=299);
	
	
	printf("\nusing for loop\n");
	for(i=201;i<=299;i++)
	{
		printf("%d\t",i);
	}
}
