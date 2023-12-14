#include<stdio.h>
void main()
{
	int a,b,c,d;
	float e;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	printf("1.Sum\n2.Difference\n3.Multipication\n4.Division\n");
	printf("Enter a number from the list of operator:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				d=a+b;
				printf("The sum is:%d",d);
			}
		break;
		case 2:
			{
				d=a-b;
				printf("The difference is:%d",d);
			}
		break;
		case 3:
			{
				d=a*b;
				printf("The Product is:%d",d);
			}
		break;
		case 4:
			{
				e=(float)a/b;
				printf("The sum is:%.4f",e);
			}
		break;
		default:
			printf("Invalid number");
	}
}
