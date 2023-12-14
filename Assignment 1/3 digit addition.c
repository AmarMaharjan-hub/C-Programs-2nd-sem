#include <stdio.h>
void main()
{
	int n,sum=0,r; 
	printf("enter a three digit number:");
	scanf("%d",&n);
	r=n%10;
	sum+=r;
	n/=10;
	r=n%10;
	sum+=r;
	n/=10;
	sum+=n;
	printf("\nthe sum of three digit is %d",sum);
}
