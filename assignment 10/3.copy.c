#include<stdio.h>
void main()
{
	FILE *fp,*ffp;
	char a[100];
	printf("Enter any content:");
	gets(a);
	fp=fopen("char.dat","w");
	fputs(a,fp);
	fclose(fp);
	fp=fopen("char.dat","r");
	ffp=fopen("copy.dat","w");
	fread(&a,sizeof(a),1,fp);
	fputs(a,ffp);
	fclose(fp);
	fclose(ffp);
	fp=fopen("copy.dat","r");
	fread(&a,sizeof(a),1,fp);
	printf("content of file char copied to another file named copy:\n");
	printf("%s",a);
	fclose(fp);
}
