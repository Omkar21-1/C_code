#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
int main()
{
	





	char s[SIZE];
	int i,j;
	
	printf("Enter string : ");
	scanf("%s",s);
	
	
	i=0;
	j=(strlen(s)-1);
	int flag = 1;
	
	while(i<j)
	{	
		if(s[i] != s[j])
		{
			flag =0;
		}		
		
		j--;	
		i++;
	}
	
	if(flag)
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is NOT palindrome\n");
	}












	/*
	char s1[100];
	char s2[100];
	int len = 0;
	int i=10;
	int j=10;
	
	for(i=0; printf("vaibhav\n"),i<10; i++);
	*/
	




	
	return 0;
}
