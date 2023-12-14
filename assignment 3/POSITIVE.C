#include<stdio.h>
#include<conio.h>
void main()
{
 int number;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&number);
 if(number==0)
 {
	printf("the number is zero");
 }
 else if(number>0)
 {
	printf("the number is positive");
 }
 else
 {
	printf("the number is negative");
 }
 getch();
}