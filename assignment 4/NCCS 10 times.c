#include<stdio.h>
void main()
{
	int i;
	printf("Using while loop:\n");
	i=1;
	while(i<=10)
	{
		printf("NCCS\n");
		i++;
	}
	printf("\nusing do whilen loop:\n");
	i=1;
	do{
		printf("NCCS\n");
		i++;
	}while(i<=10);
	printf("\nusing for loop:\n");
	i=1;
	for(i=0;i<10;i++)
	{
		printf("NCCS\n");
	}
}

