#include<stdio.h>
struct info
{
	char name[50];
	int code,price;
}item;
void main()
{
	FILE *fp;
	int i;
	printf("Enter information of 10 items:\n");
	if((fp=fopen("C:\\item.txt","w"))==NULL)
	{
		printf("error\n");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("Item %d:\n",i+1);
			printf("product name:");
			scanf(" %[^\n]",item.name);
			printf("price:");
			scanf("%d",&item.price);
			printf("code.no:");
			scanf("%d",&item.code);
			printf("\n");
			fwrite(&item,sizeof(item),1,fp);
		}
		
	}
	fclose(fp);
}
