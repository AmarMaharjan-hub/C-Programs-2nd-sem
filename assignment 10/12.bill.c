#include<stdio.h>
struct item
	{
		char itemName[20];
		int quantity;
		int price;
		int bill_id;
		
	}bill;
void main()
{
	FILE *fp;
	char des;
	fp=fopen("bill.txt","w");
	do
	{
		printf("bill id: ");
		scanf("%d",&bill.bill_id);
		printf("product name: ");
		scanf(" %[^\n]",bill.itemName);
		printf("quantity: ");
		scanf("%d",&bill.quantity);
		printf("unit price of item: ");
		scanf("%d",&bill.price);
		bill.price*=bill.quantity;
		printf("total price: %d\n\n",bill.price);
		fwrite(&bill,sizeof(bill),1,fp);
		printf("do you want to create another bill(Y/N): ");
		scanf(" %c",&des);
	}while(des=='Y');
	fclose(fp);
}
