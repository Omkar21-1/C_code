#include<stdio.h>
int main()
{
	char s[100];
	int i;
	
	printf("Enter String : ");
	gets(s);
	
	printf("Your Entered String : %s\n",s);
	
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i] = s[i]+32;
		}
	}
	printf("updated : %s\n",s);
		

	return 0;
}
