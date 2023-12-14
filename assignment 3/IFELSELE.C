#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter a year:");
 scanf("%d",&year);
 if(year%4==0)
 {
	if(year%100==0)
	{
		if(year%400==0)
		{
			printf("The year is Leapyear.");
		}
		else
		{
			printf("The year is not a Leapyear.");
		}
	}
	else
	{
		printf("The year is Leapyear.");
	}
 }
 else
 {
	printf("The year is not a Leapyear.");
 }
 getch();
}