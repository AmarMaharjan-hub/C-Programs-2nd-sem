#include<stdio.h>
void main()
{
	int i,j,fact;
	float rem,sum=0;
	for(i=1;i<=7;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		rem=(float)i/fact;
		sum=sum+rem;
	}
	printf("the sum of first seven terms are: %.4f",sum);
}
