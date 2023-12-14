#include<stdio.h>
void main()
{
	float a,b,c,d,e,total,percentage;
	printf("Enter the marks obtained in Sociology:");
	scanf("%f",&a);
	printf("Enter the marks obtained in Data Conmmunication and Commucicarion Network:");
	scanf("%f",&b);
	printf("Enter the marks obtained in Business Communication:");
	scanf("%f",&c);
	printf("Enter the marks obtained in Discrete Math:");
	scanf("%f",&d);
	printf("Enter the marks obtained in Structure Programming:");
	scanf("%f",&e);
	total=a+b+c+d+e;
	percentage=total/500*100; 
	printf("\nThe marks obtained in Sociology is:%f",a);
	printf("\nThe marks obtained in Data Communication and Communication Network is:%f",b);
	printf("\nThe marks obtained in Business Communication is:%f",c);
	printf("\nThe marks obtained in Discrete Math is:%f",d);
	printf("\nThe marks obtained in Structure Programming is:%f",e);
	printf("\nThe total marks obtained is:%f",total);
	printf("\nThe percentage obtained is:%f%%",percentage);
}
