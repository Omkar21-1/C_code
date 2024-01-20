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
		
//		printf("%3d ",i*j);
		printf("   %2d * %2d = %3d",j,i,i*j);
		}
		printf("\n");
	}


	

	return 0;
}
