
#include<stdio.h>

void main()
{
  int a,b,c=0;
 
 printf("enter a 5 digit num:");
 scanf("%d",&a);
 b=a%10; c=c*10+b; a/=10;
 b=a%10; c=c*10+b; a/=10;
 b=a%10; c=c*10+b; a/=10;
 b=a%10; c=c*10+b; a/=10;
 c=c*10+a;
 printf("the reverse is:%d",c);

}
