#include<stdio.h>
#include<string.h>
struct employee
{
	char name[50],officeName[50],occupation[50];
	int id_no;
};
void main()
{
	struct employee emp;
	FILE *fp;
	char des;
	fp=fopen("employeeinfo.dat","w+");
	do{
		printf("Name:");
		scanf(" %[^\n]",emp.name);
		printf("office name:");
		scanf(" %[^\n]",emp.officeName);
		printf("identification no:");
		scanf("%d",&emp.id_no);
		printf("Occupation:");
		scanf(" %[^\n]",emp.occupation);
		fwrite(&emp,sizeof(emp),1,fp);
		printf("Do you want to add another record(Y/N):");
		scanf(" %c",&des);
	}while(des=='Y');
	rewind(fp);
	fread(&emp,sizeof(emp),1,fp);
	printf("\n\nName of employees of NCCS College are:\n");
	while(!feof(fp))
	{
		if((strcmp(emp.officeName,"Nccs College")==0)&&(strcmp(emp.occupation,"Manager")==0))
		{
			printf("Name:%s\n",emp.name);	
		}
		fread(&emp,sizeof(emp),1,fp);	
	}
	fclose(fp);
}
