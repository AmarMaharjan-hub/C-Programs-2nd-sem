#include<stdio.h>
#include<math.h>
#define PI 3.1416

void main()
{
	float a,d,s,c,t;
	printf("Enter a number:");
	scanf("%f",&a);
	d=a*(PI/180);
	s=sin(d);
	c=cos(d);
	t=tan(d);
	printf("the corresponding sin, cos, tan, are as follows:\nsin:%f\ncos:%f\ntan:%f\n",s,c,t);
}
