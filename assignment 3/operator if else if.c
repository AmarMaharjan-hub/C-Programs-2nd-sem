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
	if(c==1)
	{
		d=a+b;
		printf("The sum is:%d",d);
	}
	else if(c==2)
		{
			d=a-b;
			printf("The difference is:%d",d);
		}
		else if(c==3)
			{
				d=a*b;
				printf("The product is:%d",d);
			}
			else if(c==4)
				{
					e=(float)a/b;
					printf("The division is:%.4f",e);
				}
				else
				{
					printf("Invalid number.");
				}
}
