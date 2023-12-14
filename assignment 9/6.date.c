#include<stdio.h>
struct date{
	int day,month,year;
}d;
void main()
{
	int cpy1,cpy2;
	printf("Enter current day:");
	scanf("%d",&d.day);
	d.day+=45;
	cpy1=d.day;
	printf("Enter current month:");
	scanf("%d",&d.month);
	cpy2=d.month;
	printf("Enter current year:");
	scanf("%d",&d.year);
	if(d.day>30)
	{
		d.day%=30;
		cpy1/=30;
		d.month+=cpy1;
	}
	if(d.month>12)
	{
		d.month%=12;
		cpy2/=12;
		d.year+=cpy2;
	}
	printf("the date after 45 days is:\n%d day\t%d month\t%d year",d.day,d.month,d.year);
}
