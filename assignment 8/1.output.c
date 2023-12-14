#include<stdio.h>
#include<conio.h>
void main()
{
	int x=9;
	int *xptr=&x;
	int **xpptr=&xptr;
	printf("content of x:%d\n",x);
	printf("content of x:%d\n",*xptr);
	printf("content of x:%d\n",*(*(xpptr)));
	printf("address of x:%d\n",&x);
	printf("address of x:%d\n",xptr);
	printf("address of x:%d\n",*xpptr);
	printf("content of xptr:%d\n",xptr);
	printf("content of xptr:%d\n",*xpptr);
	printf("address of xptr:%d\n",&xptr);
	printf("address of xptr:%d\n",xpptr);
	getch();
}
