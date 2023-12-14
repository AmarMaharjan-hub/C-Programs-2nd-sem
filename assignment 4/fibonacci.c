#include<stdio.h>
void main()
{
	int i,number_1=0,number_2=1,temp;
	printf("%d\n",number_1);
	for(i=1;i<=9;i++)
	{
		number_2+=number_1;
		printf("%d\n",number_2);
		temp=number_1;
		number_1=number_2;
		number_2=temp;
	}
	
}
