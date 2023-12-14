#include<stdio.h>
int add(int,int);
int subtract(int,int);
int product(int,int);
float division(int,int);
void main()
{
	int a,b,r;
	float re;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	r=add(a,b);
	printf("summation=%d\n",r);
	r=subtract(a,b);
	printf("subtraction=%d\n",r);
	r=product(a,b);
	printf("multipication=%d\n",r);
	re=division(a,b);
	printf("division=%.4f\n",re);
}
int add(int m,int n)
{
	return m+n;
}
int subtract(int m,int n)
{
	return m-n;
}
int product(int m,int n)
{
	return m*n;
}
float division(int m,int n)
{
	float a;
	a=(float)m/n;
	return(a);
}
