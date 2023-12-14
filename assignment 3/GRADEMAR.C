#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,total;
	float percentage;
//	clrscr();
	printf("Enter the marks obtained in Sociology:");
	scanf("%d",&a);
	printf("Enter the marks obtained in Data Conmmunication and Commucicarion Network:");
	scanf("%d",&b);
	printf("Enter the marks obtained in Business Communication:");
	scanf("%d",&c);
	printf("Enter the marks obtained in Discrete Math:");
	scanf("%d",&d);
	printf("Enter the marks obtained in Structure Programming:");
	scanf("%d",&e);
	total=a+b+c+d+e;
	percentage=(float)total/500*100;
	printf("Grade=");
	if(percentage<41)
	{
		printf("F");
	}
	else if(percentage<50)
		{
			printf("D");
		}
		else if(percentage<60)
			{
				printf("C");
			}
			else if(percentage<80)
				{
					printf("B");
				}
				else
				{
					printf("A");
				}
 getch();
}
