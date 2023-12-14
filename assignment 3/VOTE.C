#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("Please enter your age:");
 scanf("%d",&a);
 if(a<18)
 {
	printf("You are not eligible to vote");
 }
 else
 {
	printf("You are eligible to vote");
 }
 getch();
}