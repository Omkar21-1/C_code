#include<stdio.h>
#include<stdlib.h>

FILE* check_existance(char*);
void count_of_vovels(FILE*);

int main(int argc, char *argv[])
{
	FILE *fp;
	
	fp = check_existance(argv[1]);
	
	/* DISPLAYING COUNT OF VOVELS */
	count_of_vovels(fp);
	fclose(fp);
		
	return 0;
}

/* checking is entered file is in the database or not */
FILE* check_existance(char* file_name)
{
	FILE *files;	
	
	files = fopen(file_name,"r");
	if(files==NULL)
	{
		printf("PROBLEM : file \"%s\" not found\n",file_name);
		exit(0);
	}
	return files;
}

/* displaying count of vovels */
void count_of_vovels(FILE* file_pointer)
{
	char ch;
	int vovel_cnt=0;
	
	printf("\n");
	
	while(1)
	{
		ch = fgetc(file_pointer);
		if(ch==EOF)
		{
			break;
		}
		
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			++vovel_cnt;
		}
	}
	printf("Counts of VOVEL : %d\n",vovel_cnt);
}
