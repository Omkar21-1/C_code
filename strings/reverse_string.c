#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	char s[30];
	int l;
	
	printf("Enter The String : ");
	gets(s);
	
	printf("Before Swap : %s\n",s);

	int i=0;
	int j = (strlen(s) - 1);
	char ch;
	while(i<j)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		
		i++;
		j--;
	}
	
	printf("After Swap  : %s\n",s);

	return 0;
}
