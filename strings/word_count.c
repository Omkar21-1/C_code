/* Write a C program to count the number of words in a sentence. Assume words are separated by spaces. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 50

/* GLOBAL VARIABLE's */
int i=0;
int j=0;


/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */
int count_words(char [SIZE]);



/* FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION */
int count_words(char str[SIZE])
{
	int count = 1;
	for(i=0; str[i]; i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]!=' ' || str[i+1]=='\0')
			{
				count++;
			}
		}
	}
	
	return count;
}



/* ENTRY POINT FUNCTION */
int main()
{
	char str[SIZE];
	int counts_of_word;
	printf("Enter String : ");
	gets(str);
	
	counts_of_word = count_words(str);	
	
	printf("In Above String There are : %d words\n",counts_of_word);
	
	return 0;
}
