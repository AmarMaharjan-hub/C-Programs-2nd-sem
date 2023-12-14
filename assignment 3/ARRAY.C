#include<stdio.h>
#include<conio.h>
void main()
{
 int num[50],i,nth;
 clrscr();
 printf("Enter the nth number(n<50):");
 scanf("%d",&nth);
 for(i=0;i<nth;i++)
 {
	printf("Enter the %dth number:",i+1);
	scanf("%d",&num[i]);
 }
 printf("The numbers you entered are:\n");
 for(i=0;i<nth;i++)
 {
	printf("%d\n",num[i]);
 }
 getch();
}
