/* 
	Copying Files:
	Create a program that copies the contents of one file ("source.txt") to another file ("destination.txt").
*/

#include<stdio.h>
#include<stdlib.h>
#include "current_time_log.h"

int main(int argc, char *argv[])
{
	
	if(argc < 2)
	{
		printf("Insufficient No. of Command Line Argument\n");
		exit(0);
	}
	
	FILE *fpr;
	FILE *fpw;
	
	fpr = fopen(argv[1],"r");
	if(fpr==NULL)
	{
		printf("PROBLEM : File \"%s\" Not Found\n",argv[1]);
		exit(0);
	}
	fpw = fopen(argv[2],"w");
	if(fpw==NULL)
	{
		printf("PROBLEM : Insufficient Storage Unable to Create \"%s\" File\n",argv[2]);
		exit(0);
	}
	
	
	char a[100];
	while(fgets(a,sizeof(a),fpr))
	{
		fputs(a,fpw);
	}
	
	fclose(fpr);
	fclose(fpw);
	
	current_time_log();
	
	printf("Done\n");
	
	return 0;
}
