#include<stdio.h>
struct info
{
	char name[50];
	int code,price;
}item;
void main()
{
	FILE *fp;
	int i=0,code;
	printf("Enter the code of a item:");
	scanf("%d",&code);
	fp=fopen("C:\\item.txt","r");
	while(!feof(fp))
	{
		fread(&item,sizeof(item),1,fp);
		if(code==item.code)
		{
			printf("product name: %s\nprice: %d",item.name,item.price);
			i=1;
			break;
		}
	}
	if(i==0)
		{
			printf("Search not found.");
		}
		fclose(fp);
}
