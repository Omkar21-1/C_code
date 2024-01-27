/*
Create a program that determines whether two given strings are anagrams or not. Anagrams are strings that contain the same characters but may be in a different order.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	int check = 0;
	int i;
	char s3[2];
	//char ch;
	char *p;
	
	printf("Enter string 1 : "); 
	scanf("%s",s1);
	
	printf("Enter string 2 : "); 
	scanf("%s",s2);
	

	if((strlen(s1))!=(strlen(s2)))
	{
		printf("Given String's are not Anagrams!!!\n");
		exit(0);
	}
	
	for(i=0; s2[i]; i++)
	{
		s3[0] = s2[i];
		//ch = s2[i];
		p = strstr(s1,s3);			// strstr => jr deleli string bhetli tr tyachya ADDRESS pathvto ANI me te p madhe ghetla
		if(p==NULL)
		{
			check=1;
			break;
		}
		else
		{
			*p=32;				// alelya address vr 'space' takla karan nantr te dileya char la match hou ny mhanun
		}
	}
	
	if(check==1)
	{
		printf("Given String's are not Anagrams!!!\n");
	}
	else
	{
		printf("Given String's are Anagrams..\n");
	}
	
	
	//printf("%c\n",s3[0]);

	return 0;
}






























