

#include<stdio.h>
void main()
{
	int h,m,s;
	printf("Enter the hour:");
	scanf("%d",&h);
	m=h*60;
	s=h*3600;
	printf("The converted minute is:%dmin",m);
	printf("\nThe converted second is:%dsec",s);
}
