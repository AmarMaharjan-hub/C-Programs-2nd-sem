#include<stdio.h>
void main()
{
	int i=100,num=0,sum=0;
	while(i<=200)
	{
		if(i%5!=0&&i%7==0)
		{
			num++;
			sum+=i;
		}
		i++;
	}
	printf("the num of integer greater than 100 and less than 200 that are exactly divisible by 7 but not by 5 is:%d\n",num);
	printf("the sum of integer greater than 100 and less than 200 that are exactly divisible by 7 but not by 5 is:%d\n",sum);
}
