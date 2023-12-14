#include<stdio.h>
#include<conio.h>
int main()
{
 long int salary;
 int gender;
 float bonus,extraBonus,total;
// clrscr();
 printf("1=male\n2=female\n");
 printf("Enter a option given above:");
 scanf("%d",&gender);
 printf("Enter your salary:");
 scanf("%ld",&salary);
 extraBonus=(float)salary*2/100;
if(gender==1)
{
		bonus=(float)salary*5/100;
		if(salary<10000)
		 {
			total=salary+bonus+extraBonus;
			printf("the total salary is:%.4f",total);

		 }
		 else{
			total=salary+bonus;
			printf("the total salary is:%.4f",total);
		 }
}
else if(gender==2)		 
		{
		bonus=(float)salary*10/100;
		if(salary<10000)
		{
			total=salary+bonus+extraBonus;
			printf("the total salary is:%.4f",total);

		}
		else{
			total=salary+bonus;
			printf("the total salary is:%.4f",total);
		 }
 }
else
	{
		printf("Invalid charcater!!!");
	}
 getch();
}
