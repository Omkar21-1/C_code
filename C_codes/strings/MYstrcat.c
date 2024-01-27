#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *s1;
	char s2[30];
	
	int s1len;
	int s2len;
	
	int i,j;
	
	
	s1 = (char *) malloc(30 * sizeof(char) );
	if(s1==NULL)
	{
		printf("INSUFFICIENT STORAGE FOR ALLOCATION !!!");
		exit(0);
	}
	
	
	
	printf("Enter String 1 : ");
	gets(s1);
	
	printf("Enter String 1 : ");
	gets(s2);
	
	puts(s1);
	puts(s2);
	
	
	for(s1len=0; s1[s1len]; s1len++);
	s1len--;
	
	
	for(s2len=0; s2[s2len]; s2len++);
	s2len--;
	
	
	s1 = (char *) realloc(s1, s2len * sizeof(char));
	if(s1==NULL)
	{
		printf("INSUFFICIENT STORAGE FOR ALLOCATION !!!");
		exit(0);
	}
	
	for(i=s1len,j=0; s2[j]; i++,j++)
	{
		s1[i] = s2[j];
	}s1[i]='\0';
	
	
	printf("MYstrcat : %s\n",s1);
	
	
	
	free(s1);
	
	return 0;
}
