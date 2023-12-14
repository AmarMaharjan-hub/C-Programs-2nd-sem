#include<stdio.h>
int reverse(int);
void main()
{
	int n,rev;
	printf("Enter a number:");
	scanf("%d",&n);
	rev=reverse(n);
	printf("The reverse is:%d",rev);
}
int reverse(num)
{
	int rem,rev=0;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}
