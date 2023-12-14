#include<stdio.h>
void main()
{
	int num1,num2,*ptr1,*ptr2,result;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);	
	ptr1=&num1;
	ptr2=&num2;
	result=*ptr1+*ptr2;
	printf("\nThe sum is:%d",result);
	result=*ptr1-*ptr2;
	printf("\nThe difference is:%d",result);
	result=*ptr1*(*ptr2);
	printf("\nThe product is:%d",result);
}
