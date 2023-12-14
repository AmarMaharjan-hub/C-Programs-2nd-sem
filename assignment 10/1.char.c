#include<stdio.h>
void main()
{
	FILE *fp;
	char a,b;
	printf("Enter a character ");
	scanf(" %c",&a);
	fp=fopen("char.dat","w+");
	fputc(a,fp);
	fclose(fp);
	fp=fopen("char.dat","r");
	b=fgetc(fp);
	printf("the character is %c",b);
	fclose(fp);
}
