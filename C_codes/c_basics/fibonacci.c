#include<stdio.h>












int main()
{
	int n,d1,d2,d3,i;
	printf("enter the number :");
	scanf("%d",&n);

	d1=1;
	d2=0;

	/*
	printf("0 ");
	for(i=1; i<=n; i++)
	{
		d3=d1+d2;
		printf("%d ",d3);
		d1=d2;
		d2=d3;
	}
	*/


	for(i=1; i<=n; i++)
	{
		d3=d1+d2;
		printf("%d ",d3);
		d1=d2;
		d2=d3;
	
	}
	


	return 0;
}
