#include<stdio.h>
void main()
{
	float bs,t,a,ns;
	printf("Enter your basic salary:");
	scanf("%f",&bs);
	t=bs*20/100;
	a=bs*40/100;
	ns=bs-t+a;
	printf("the 20%% tax of basic salary is:%f",t);
	printf("\nthe 40%% allowance of basic salary is:%f",a);
	printf("\nthe net salary is:%f",ns);
}
