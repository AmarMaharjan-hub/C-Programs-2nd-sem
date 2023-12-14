/*for question 9 */
#include<stdio.h>
void main()
{
	int a[10],i,n;
	int *p;
	p=a;
	printf("Enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("The numbers you entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
}
