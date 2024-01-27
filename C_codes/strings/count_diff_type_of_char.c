#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i;
	char s[100];
	
	int scnt=0;
	int ccnt=0;
	int icnt=0;
	int spcnt=0;
	
	
	printf("Enter String : ");
	gets(s);
	
	for(i=0; s[i]; i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			scnt++;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			ccnt++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			icnt++;
		}
		else
		{
			spcnt++;
		}
	}
	
	printf("Count of Small Alphabet    : %d\n",scnt);
	printf("Count of Capital Alphabet  : %d\n",ccnt);
	printf("Count of Integers	   : %d\n",icnt);
	printf("Count of Special Character : %d\n",spcnt);
	
	
	return 0;
}
