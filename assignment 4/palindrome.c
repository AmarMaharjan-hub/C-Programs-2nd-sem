#include<stdio.h>
void main()
{
	int num,copy,rev=0,rem;
	printf("Enter a number:");
	scanf("%d",&num);
	copy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(copy==rev)
	printf("The number is palindrome");
	else
	printf("The number is not a palindrome");
}
