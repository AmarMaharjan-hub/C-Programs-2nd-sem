#include<stdio.h>


void main()
{
   int a,b,c=0,d;


 printf("Enter a 5 digit number:");
 scanf("%d",&a);
 b=a%10; d=b*b; c+=d; a/=10;
 b=a%10; d=b*b; c+=d; a/=10;
 b=a%10; d=b*b; c+=d; a/=10;
 b=a%10; d=b*b; c+=d; a/=10;
 c+=a*a;
 printf("The sum of square of each digit is:%d",c);
 
}
