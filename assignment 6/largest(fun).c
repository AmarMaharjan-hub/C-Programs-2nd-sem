#include<stdio.h>
int largest(int,int,int);
void main()
{
	int a,b,c,lar;
	printf("Enter 3 numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	lar=largest(a,b,c);
	printf("%d is the largest number",lar);
}
int largest(x,y,z)
{
	int great;
	great=x>y? x>z? x:z :y>z? y:z;
	return great;
}
