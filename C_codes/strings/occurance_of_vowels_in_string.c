#include<stdio.h>
int main()
{
	char s[100];
	int i;
	
	int acnt=0;
	int ecnt=0;
	int icnt=0;
	int ocnt=0;
	int ucnt=0;
	
	
	printf("Enter String : ");
	gets(s);
	
	printf("\nYour Entered String : %s\n\n",s);
	
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='a' || s[i]=='A')
		{
			acnt++;
		}
		else if(s[i]=='e' || s[i]=='E') 
		{
			ecnt++;
		}else if(s[i]=='i' || s[i]=='I') 
		{
			icnt++;
		}
		else if(s[i]=='o' || s[i]=='O') 
		{
			ocnt++;
		}
		else if(s[i]=='u' || s[i]=='U') 
		{
			ucnt++;
		}
		
	}
	
	printf(" 'a' 'A' occurs %d times\n",acnt);
	printf(" 'e' 'E' occurs %d times\n",ecnt);
	printf(" 'i' 'I' occurs %d times\n",icnt);
	printf(" 'o' 'O' occurs %d times\n",ocnt);
	printf(" 'u' 'U' occurs %d times\n",ucnt);		

	return 0;
}
