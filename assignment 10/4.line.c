#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char a[100];
	printf("enter a line of text:");
	gets(a);
	fp=fopen("char.dat","w");
	fputs(a,fp);
	fclose(fp);
	fp=fopen("char.dat","r");
	fgets(a,100,fp);
	printf("the entered line is:\n");
	printf("%s",a);
	fclose(fp);
}
