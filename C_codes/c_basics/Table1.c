#include<stdio.h>
#include<stdlib.h>
int main()
{

	int num,i,j;

	printf("Enter Number :");
	scanf("%d",&num);

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=num; j++)
		{
		
		printf("%d ",i*j);
		printf("%d * %d = %3d",j,i,i*j);
		}
		printf("\n");
	}


	

	return 0;
}
