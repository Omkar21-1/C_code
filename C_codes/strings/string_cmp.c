#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s1[100];
	char s2[100];
	int cmp = 0;
	int i;
	
	printf("Enter String : ");
	gets(s1);
	
	printf("Enter String : ");
	gets(s2);
	
	
	if((strlen(s1))!=(strlen(s2)))
	{
		printf("\nNo\n");
		exit(0);
	}
	
	
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]!=s2[i])
		{
			cmp = 1;
		}
	}
	
	

	if(cmp==0)
	{
		printf("\nYes\n");
	}	
	else 
	{
		printf("\nNo\n");
	}

	return 0;
}
