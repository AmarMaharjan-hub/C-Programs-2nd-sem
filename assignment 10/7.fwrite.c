#include<stdio.h>
void main()
{
	FILE *fp;
	char code[100];
	printf("write a code:\n");
	fp=fopen("char.dat","w+");
	gets(code);
	fwrite(&code,sizeof(code),1,fp);
	rewind(fp);
	printf("The code you wrote are:\n");
	fread(&code,sizeof(code),1,fp);
	printf("%s",code);
	fclose(fp);
}
