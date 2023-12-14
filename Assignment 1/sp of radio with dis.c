#include<stdio.h>
void main()
{
	float mp,d,sp;
	printf("Enter the mark price of the radio:");
	scanf("%f",&mp);
	d=mp*30/100;
	sp=mp-d;
	printf("The selling price of the radio after the 30%% discount is:%f",sp);
}
