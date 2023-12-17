/* Implement a function to find and display the frequency of each character in a given string. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 50

/* GLOBAL VARIABLE's */
int i=0;
int j=0;


/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */
void char_freq(char [SIZE]);


/* FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION */
void char_freq(char str[SIZE])
{
	int count[128] = {0};
	for(i=0; str[i]!='\0'; i++)
	{
		count[str[i]]++;
	}
	for(i=0; i<128; i++)
	{
		if(count[i]>0)
		{
			printf("%c : occurs : %2d time's\n",i,count[i]);
		}
	}printf("\n");
}

/* ENTRY POINT FUNCTION */
int main()
{
	char str[SIZE];
	printf("Enter String : ");
	gets(str);	
	
	char_freq(str);
	
	return 0;
}
