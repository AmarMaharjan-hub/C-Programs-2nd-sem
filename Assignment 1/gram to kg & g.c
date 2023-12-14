
#include<stdio.h>
void main()
{
	int a,kg,g;
	printf("Enter the weight in gram:");
	scanf("%d",&a);
	kg=a/1000;//to convert the gram in weight. 1kg=1000gram
	g=a%1000;// to get the modlus which gives the left gram.
	printf("the kilogram is %dkg and gram is %dg",kg,g);
}
