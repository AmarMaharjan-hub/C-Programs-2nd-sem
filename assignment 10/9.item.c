#include<stdio.h>
struct info
{
	char name[50];
	int code,price;
}item;
void main()
{
	int i;
	FILE *fp;
	if((fp=fopen("C:\\item.txt","r"))==NULL)
	{
		printf("Error");
	}
	else
	{
		printf("content of item.txt:\n");
		fread(&item,sizeof(item),1,fp);
		while(!feof(fp))
		{
			printf("product name: %s\nprice: %d\ncode: %d\n\n",item.name,item.price,item.code);	
			fread(&item,sizeof(item),1,fp);
		}
	}
	fclose(fp);
}
