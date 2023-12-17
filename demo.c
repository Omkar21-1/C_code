#include<stdio.h>
int main()
{
	int i,j,sp;

		for(i=5; i>=1; i--)
		{
			for(sp=5; sp>=i; sp--)
			{
				printf(" ");
			}
			for(j=1; j<=i; j++)
			{
				printf(" *");
			}
		
		printf("\n");
		}

	return 0;
}

