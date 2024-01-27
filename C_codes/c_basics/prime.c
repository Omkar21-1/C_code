#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,range;
	printf("enter the range :");
	scanf("%d",&range);

	if(range<0)
	{
	printf("enter a positive range!!!");
	exit(0);
	}

	printf("prime numbers\n");

	for(num=1; num<=range; num++)
	{	

		for(i=2; i<num; i++)
		{
			if(num%i==0)
			{
				//printf("%d is not prime number\n\n\n",num);
				break;
			}
			
		}	
		


		if(num==i)
		{
			printf(" %d \n",num);

			//printf("%d is prime number",num);
		}
	}
	return 0;
}
