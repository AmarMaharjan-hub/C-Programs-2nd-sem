#include<stdio.h>
void armstrong(int);
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	armstrong(n);
}
void armstrong(num)
{
	int cpy=num,rem,arm=0;
	while(num!=0)
	{
		rem=num%10;
		arm+=rem*rem*rem;
		num/=10;
	}
	if(arm==cpy)
	{
		printf("%d is armstrong number",cpy);
	}
	else
	{
		printf("%d is not armstrong number",cpy);
	}
}
