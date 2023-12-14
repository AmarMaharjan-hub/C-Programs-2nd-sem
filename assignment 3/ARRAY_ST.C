#include<stdio.h>
#include<conio.h>
void main()
{
 int ;
 clrscr();
 printf("Enter the nth number:");
 scanf("%d",&nth);
 for(i=0;i<nth;i++)
 {
	printf("Enter the %dth number:"i+1);
	scanf("%d",&num[i]);
 }
 pruntf("The numbers you entered are:\n");
 for(i=0;i<nth;i++)
 {
	printf("%d\n",num[i]);
 }
 getch();
}