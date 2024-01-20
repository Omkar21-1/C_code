/*
accept the number from user and
check weather it is whole number or not

*/
#include<stdio.h>
int main()
{
 long int num;
 	printf("enter a number :");
	scanf("%ld",&num);

	if(num>=0)
	{
		printf("%ld is whole number\n",num);
	}
	else
	{
		printf("%ld is not whole number\n",num);
	}


return 0;
}
