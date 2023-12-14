#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("enter the second number:");
 scanf("%d",&b);
 printf("Enter the third number:");
 scanf("%d",&c);
 d=a>b? a>c? a:c :b>c? b:c;
 printf("the maximum number is %d",d);
 d=a<b? a<c? a:c :b<c? b:c;
 printf("\nthe minimum number is %d",d);
}
