#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100





int main()
{

	char str[SIZE];
	int i;
	int j;
	
	int flag = 1;
	
	printf("Enter String : ");
	gets(str);
	
	i = 0;
	j = strlen(str) - 1;
	
	for(i,j; i<j; i++,j--)
	//while(i < j)
	{
		if(str[i] != str[j])
		{
			flag=0;
			break;
		}
	//	i++;
	//	j--;
	}
	
	if(flag==1)
	{
		printf("%s is Palindrome\n",str);
	}
	else
	{
		printf("%s is NOT Palindrome\n",str);
	}



























				/*
				char s1[100];
				char s2[100];
				int len = 0;
				int i=0;
				int j=0;
				
				printf("Enter String : ");
				gets(s1);
				
				len = strlen(s1) -1;
				
				for(i=len,j=0; i>=0; i--,j++)
				{
					s2[j] = s1[i];
				}
				
				s2[j]='\0';
				

				
				printf("%s\n",s1);
				printf("%s\n",s2);
				
				if((strcmp(s1,s2))==0)
				{
					printf("Yes\n");
				}
				else
				{
					printf("No\n");
				}
				*/
	

	return 0;
}
