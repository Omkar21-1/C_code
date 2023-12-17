#include<stdio.h>
#include<stdlib.h>


int main()
{
	char fname[15];
	FILE *fp;
	
	printf("Ener File Name : ");
	scanf("%s",fname);
	
	fp = fopen(fname,"r");
	if(fp==NULL)
	{
		printf("PROBLEM : [%s] File Not Found!\n",fname);
		exit(0);
	}
	
	

	
	for(int i=0; i<10; i++)
	{
		printf("%c ",fp[i]);
	}
	
	
	fclose(fp);
	
	

	printf("\nDone!!\n");
	




	
	return 0;
}
