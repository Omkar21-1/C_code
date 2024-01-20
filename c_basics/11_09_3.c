/*
accept two numbers from user and
find maximum from them
*/

#include<stdio.h>
int main()
{
int first_num,second_num;

	printf("enter first number :");
 	scanf("%d",&first_num);

	printf("enter second number :");
	scanf("%d",&second_num);

	if(first_num==second_num)
	{
		printf("\t %d = %d\n" ,first_num,second_num);
	}

	if(first_num > second_num) 
	{
		printf("\t %d is maximum \n",first_num);
	}
	
	else
	{
		printf("\t %d is maximum \n",second_num);
	}

return 0;
} 
