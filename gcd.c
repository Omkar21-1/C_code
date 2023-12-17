#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num_1,num_2,i;
	printf("ENTER THE LOWER LIMIT :");
	scanf("%d",&num_1);	

	printf("ENTER THE UPPER LIMIT :");
	scanf("%d",&num_2);
/*
	if(num_1>num_2)
	{
		printf("LOWER LIMIT IS GREATER THAN UPPER LIMIT");
		exit(0);
	}

*/	printf("IN %d AND %d THE ",num_1,num_2);
//	for(i=num_1; i!=num_2;)

	while(num_1!=num_2)
	{
		if(num_1>num_2)
		{
			num_1=num_1-num_2;
		}
		else
		{
			num_2=num_2-num_1;
		}
	}

	printf("GREATEST COMMON DIGIT IS :%d\n",num_1);
	return 0;
}
