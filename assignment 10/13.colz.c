#include<stdio.h>
#include<string.h>
struct college
{
	char name[50],location[50];
	int nof;
};
void main()
{
	struct college colz;
	FILE *fp;
	char des;
	fp=fopen("university.dat","w+");
	do{
		printf("Name:");
		scanf(" %[^\n]",colz.name);
		printf("location:");
		scanf(" %[^\n]",colz.location);
		printf("no of faculities:");
		scanf("%d",&colz.nof);
		fwrite(&colz,sizeof(colz),1,fp);
		printf("Do you want to add another college(Y/N):");
		scanf(" %c",&des);
	}while(des=='Y');
	rewind(fp);
	fread(&colz,sizeof(colz),1,fp);
	printf("\n\nNo. of colleges that are located in Kathmandu are:\n");
	while(!feof(fp))
	{
		if(strcmp(colz.location,"Kathmandu")==0)
		{
			printf("Name:%s\n",colz.name);	
		}
		fread(&colz,sizeof(colz),1,fp);	
	}
	fclose(fp);
}
