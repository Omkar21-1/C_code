#include<time.h>

void current_time_log()
{
	
	time_t cur_time;
	time(&cur_time);
	
	FILE *fp;
	
	fp = fopen("Time_Log.txt","a");
	if(fp==NULL)
	{
		printf("PROBLEM : Insufficient Storage for Appending \"Time_log.txt\" File");
		exit(0);
	}
	
	fputs(ctime(&cur_time),fp);
	
	fclose(fp);
}
