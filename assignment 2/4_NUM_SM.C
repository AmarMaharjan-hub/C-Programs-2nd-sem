#include<stdio.h>

void main()
{
 int a,b,c,d,e;
 
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 printf("Enter the third number:");
 scanf("%d",&c);
 printf("Enter the fourth number:");
 scanf("%d",&d);
 e=a<b? c<d?  a<c? a : c : a<d? a : d  : c<d?  b<c?  b : c :  b<d?  b  :  d;
 printf("The smallest number is: %d",e);

 
}
