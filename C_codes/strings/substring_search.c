/*
Implement a function to find the first occurrence of a substring within a given string. Return the index of the first character of the substring if found, -1 otherwise.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 50

/* GLOBAL VARIABLES */
int i;
int j;


/* Function Declaration or Function Prototype */
int search_char(char [SIZE],char);



/* Function Code or Function Defination or Function Body */
int search_char(char str[SIZE],char search)
{
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==search)
		{
			return i;
		}
	}
	
	return -1;
}

/* Entry point function */
int main()
{
	char str[SIZE];
	char search;
	
	printf("Enter String : ");
	gets(str);
	
	printf("Enter Character To Search : ");
	scanf("%c",&search);

	
	int ans;
	
	ans = search_char(str,search);
	
	

	if(  0 <= ans  )
	{
		printf("\nFound :) \nIndex of [%c] in [%s] is : %d\n",search,str,ans);
	}
	else
	{
		printf("\nNot Found :( \nIndex of [%c] in [%s] is : %d\n",search,str,ans);
	}



	return 0;
}
