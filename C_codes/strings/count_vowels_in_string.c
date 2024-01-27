#include<stdio.h>
int main()
{
	char s[100];
	int i;
	int count=0;
	
	printf("Enter String : ");
	gets(s);
	
	printf("Your Entered String : %s\n",s);
	
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
		{
			count++;
		}
	}
	printf("Count Of Vowels : %d",count);
		

	return 0;
}
