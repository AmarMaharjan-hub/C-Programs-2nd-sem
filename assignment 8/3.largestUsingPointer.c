#include<stdio.h>
void main()
{
	int a,b,c,*ptr1,*ptr2,*ptr3,lar;
	printf("Enter three numbers.\n");
	scanf("%d%d%d",&a,&b,&c);
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	lar=*ptr1>*ptr2? *ptr1>*ptr3? *ptr1 : *ptr3 : *ptr2>*ptr3? *ptr2 : *ptr3;
	printf("The largest number is:%d",lar);
}
