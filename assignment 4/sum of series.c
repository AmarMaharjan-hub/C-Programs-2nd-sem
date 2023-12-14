#include<stdio.h>
void main()
{
	int num_1,nth,i,fact,j,power,k;
	float sum=1,rem;
	printf("Enter the value of x:");
	scanf("%d",&num_1);
	printf("Enter the nth term:");
	scanf("%d",&nth);
	for(i=1;i<=nth;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
			power=1;
				for(k=1;k<=j;k++)
					{
							power*=num_1;
					}
		}
		
		rem=(float)power/fact;
		sum=sum+rem;
		
	}
	printf("the value of the series is:%.4f",sum);
}
