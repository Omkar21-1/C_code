/*
Create a function to compress a given string by replacing consecutive repeating characters with the character followed by the count. If the compressed string is longer than the original, keep the original.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 50

/* GLOBAL VARIABLE's */
int i=0;
int j=0;


/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */
void compress_string(char [SIZE]);


/* FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION */
void compress_string(char str[SIZE])
{
	int count[128] = {0};
	for(i=0; str[i]!='\0'; i++)
	{
		count[str[i]]++;
	}
	for(i=0; i<128; i++)
	{
		if(count[i]==1)
		{
			printf("%c",i);
		}
		else if(count[i]>1)
		{
			printf("%c(%d)",i,count[i]);
		}
		}printf("\n");
}

/* ENTRY POINT FUNCTION */
int main()
{
	char str[SIZE];
	printf("Enter String : ");
	gets(str);	
	
	compress_string(str);
	
	return 0;
}
