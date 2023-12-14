#include<stdio.h>
void main()
{
	int i,count=0,age;
	for(i=1;i<=10;i++)
	{
		printf("Enter age of %d person:",i);
		scanf("%d",&age);
		if(age>=50&&age<=60)
		{
			count++;
		}	
	}
	printf("The number of people of age 50-60 is:%d",count);
	
}
