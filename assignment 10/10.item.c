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
	printf("Adding 5 more items to item.txt\n\n");
	fp=fopen("C:\\item.txt","a");
	for(i=0;i<5;i++)
	{
		printf("item %d:\n",i+11);
		printf("product name:");
		scanf(" %[^\n]",item.name);
		printf("price:");
		scanf("%d",&item.price);
		printf("code.no:");
		scanf("%d",&item.code);
		printf("\n");
		fwrite(&item,sizeof(item),1,fp);
	}
	fclose(fp);
}
