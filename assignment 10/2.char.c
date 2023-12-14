#include<stdio.h>
void main()
{
	FILE *fp;
	char a[100];
	fp=fopen("char.dat","a");
	printf("Enter any content ");
	gets(a);
	fputs(a,fp);
	fclose(fp);
	fp=fopen("char.dat","r");
	fgets(a,100,fp);
	printf("the content is:\n");
	printf("%s",a);
	fclose(fp);
}
