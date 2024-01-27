/*  
	File Appending:
	Open a file named "log.txt" for appending. Write a log message with the current date and time each time the program is executed.
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
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
	printf("Done");
	
	
	
	

	return 0;
}
