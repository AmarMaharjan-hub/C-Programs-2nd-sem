#include<stdio.h>
void main()
{
	int q,p,t;
	printf("Enter the quantity of the product:");
	scanf("%d",&q);
	printf("Enter the price per quantity of the product:");
	scanf("%d",&p);
	t=q*p;
	printf("The total price of the product is: %d",t);
}
