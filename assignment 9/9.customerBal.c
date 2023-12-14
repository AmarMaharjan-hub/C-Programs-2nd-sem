#include<stdio.h>
#include<process.h>
struct customer{
	char name[50];
	int ac_no,bal;
}c[50];
void main()
{
	int i,n;
	printf("Enter the number of customer(number>10):");
	scanf("%d",&n);
	
	if(n<=10)
	{
		printf("The number should be greater than 10");
		exit(0);
	}
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("customer %d\n",i+1);
		printf("name:");
		scanf(" %[^\n]",c[i].name);
		printf("account number:");
		scanf("%d",&c[i].ac_no);
		printf("Balance:$");
		scanf("%d",&c[i].bal);
		printf("\n\n");
		if(c[i].bal>1000)
		{
			c[i].bal+=100;
		}
	}
	printf("List of all customers having balance less than $200:\n");
	for(i=0;i<n;i++)
	{
		if(c[i].bal<200)
		{
			printf("name:%s\naccount no:%d\nbalance:%d\n\n",c[i].name,c[i].ac_no,c[i].bal);
		}
	}
	printf("$100 added to the customers having balance greater than $1000\n");
	for(i=0;i<n;i++)
	{
		if(c[i].bal>1000)
		{
			printf("name:%s\naccount no:%d\nbalance:%d\n\n",c[i].name,c[i].ac_no,c[i].bal);
		}
	}	
}
