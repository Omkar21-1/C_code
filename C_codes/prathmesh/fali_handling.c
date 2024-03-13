/* 
	Copying Files:
	CMD Line
	Create a program that copies the contents of one file ("source.txt") to another file ("destination.txt").
	Q1) A Write C program to copy contents of one file to another by changing case [15 marks] of each alphabet and replacing digits by *
*/

#include<stdio.h>
#include<stdlib.h>

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
	while( fgets(a,sizeof(a),fpr) )
	{
		for(int i=0; i<100; ++i)
		{			
			if(a[i]>='A' && a[i]<='Z')
			{
				a[i] += 32;
			}
			else if(a[i]>='a' && a[i]<='z')
			{
				a[i] -= 32;
			}
			else if(a[i]>='0' && a[i]<='9')
			{
				a[i] = '*';
			}
		}
		fputs(a,fpw);
	}
	
	fclose(fpr);
	fclose(fpw);
		
	printf("Done\n");
	
	return 0;
}
