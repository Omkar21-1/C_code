#include<stdio.h>
int main()
{
	int i,j,k,sp;

	for(i=1; i<=2; i++)
	{
		for(sp=1; sp<=(3-i); sp++)
		{
			printf(" ");
		}
		for(j=1; j<=(i+1); j++)
		{
			printf(" *");
		}



	printf("\n");
	}	













	
	for(i=8; i>=1; i--)
	{
		for(sp=1; sp<=(8-i); sp++)
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
