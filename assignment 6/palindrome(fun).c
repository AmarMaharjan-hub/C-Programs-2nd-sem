#include<stdio.h>
void palindrome(int);
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(num)
{
	int rem,rev=0,cpy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(cpy==rev)
	{
		printf("The number is Palindrome");
	}
	else
	{
		printf("The number is not Palindrome");
	}
}
