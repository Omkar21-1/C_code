/* IN THIS CODE WE WILL SEE HOW TO PASS ARGUMENT TO MAIN FUNCTION */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
	int ans=1;
	int i;
	
	if(argc==1)
	{
		printf("No Values Sent From Command Line!!!\n");
		exit(0);
	}
	
	for(i=1; i<argc; i++)
	{	
		ans = ans * atoi(argv[i]);
	}
	printf("Multiplication = %d",ans);
	
	return 0;
}
