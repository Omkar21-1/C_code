#include<stdio.h>
#include<stdlib.h>
typedef char BUFFER;


int main(int argc, char *argv[])
{
	FILE *fpr,*fpw;
	int n;
	BUFFER b;
	
	if(argc<3)
	{
		printf("Invaled no. og Arguments!!\n");
		exit(0);
	}
	
	fpr = fopen(argv[1],"rb");
	if(fpr==NULL)
	{
		printf("PROBLEM : Unable to open \"%s\" file",argv[1]);
		exit(0);
	}
	fpw = fopen(argv[2],"wb");
	if(fpw==NULL)
	{
		printf("PROBLEM : Unable to write \"%s\" file",argv[2]);
		exit(0);
	}
	
	while(1)
	{
		n = fread(&b, sizeof(b), 1, fpr);
		if(n==0)
		{
			break;
		}
		
		fwrite(&b,sizeof(b),1,fpw);
	}
	
	fclose(fpr);
	fclose(fpw);
	
	printf("Done!!!\n");
	
	return 0;
}
