#include<stdio.h>
#include<stdlib.h>

struct student{
	int rno;
	char name[30];
	float per;
};
typedef struct student std;

int main(int argc, char *argv[])
{

	if(argc<3)
	{
		printf("Insufficient no. Arguments!!\n");
		exit(0);
	}

	FILE *fpr;
	FILE *fpw;
	std s;
	int n;
	
	
	fpr = fopen(argv[1],"r");
	if(fpr==0)
	{
		printf("PROBLEM : File \"%s\" Not Found\n",argv[1]);
		exit(0);
	}
	fpw = fopen(argv[2],"w");
	if(fpw==0)
	{
		printf("PROBLEM : File \"%s\" Not Found\n",argv[2]);
		exit(0);
	}
	
	while(1)
	{
		n = fscanf(fpr,"%d %s %f",&s.rno,s.name,&s.per);		
		if(n==-1)
		{
			break;
		}
		/*
		//FOR PRINTING DATA ON MONITER WHICH IS IN FILE 
		printf("%d %s %f\n",s.rno,s.name,s.per);
		*/
		
		/*
		//FOR SAVING ACCEPTED DATA FROM KEYBOARD/MONITER IN FILE
		scanf("%d %s %f",&s.rno,s.name,&s.per);
		*/
		
		
		fprintf(fpw,"%d %s %f\n",s.rno,s.name,s.per);
	}
	
	
	fclose(fpr);
	fclose(fpw);
	
	
	printf("All Data Form '%s' Stored in '%s' Succesfully !!\n",argv[1],argv[2]);

	return 0;
}













































