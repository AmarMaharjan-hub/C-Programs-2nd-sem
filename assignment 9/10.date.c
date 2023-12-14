#include<stdio.h>
struct date{
	int day,month,year;
}d[2],add;
void main()
{
	int i,cpy1,cpy2;
	for(i=0;i<2;i++)
	{
		printf("Date %d\n",i+1);
		printf("day:");
		scanf("%d",&d[i].day);
		printf("month:");
		scanf("%d",&d[i].month);
		printf("year:");
		scanf("%d",&d[i].year);
		printf("\n\n");
	}
	add.day=d[0].day+d[1].day;
	cpy1=add.day;
	add.month=d[0].month+d[1].month;
	cpy2=add.month;
	add.year=d[0].year+d[1].year;
	if(add.day>30)
	{
		add.day%=30;
		cpy1/=30;
		add.month+=cpy1;
	}
	if(add.month>12)
	{
		add.month%=12;
		cpy2/=12;
		add.year+=cpy2;
	}
	printf("after adding two dates:\n");
	printf("day:%d\tmonth:%d\tyear:%d\t",add.day,add.month,add.year);
}
