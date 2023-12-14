#include<stdio.h>
void main()
{
	FILE *fp;
	char a[50];
	int b;
	fp=fopen("char.dat","w");
	printf("Enter a stirng: ");
	//gets(a);
	scanf(" %[^\n]",a);
	printf("Enter an integer:");
	scanf("%d",&b);
	fprintf(fp,"%s %d",a,b);
	fclose(fp);
	printf("The content you entered are:\n");
	fp=fopen("char.dat","r");
	fscanf(fp,"%s %d",&a,&b);
	printf("string:%s\n",a);
	printf("integer:%d",b);
	fclose(fp);
}
