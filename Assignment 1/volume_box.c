//WAP to calculate the volume of a box.

#include<stdio.h>
void main()
{
	int l,b,h,v;
	printf("Enter the length of the box:");
	scanf("%d",&l);
	printf("Enter the breadth of the box:");
	scanf("%d",&b);
	printf("Enter the height of the box:");
	scanf("%d",&h);
	v=l*b*h;
	printf("The volume of the box is: %d",v);
}
