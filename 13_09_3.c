/*
accept the number from user and 
check weather it is divisible by 5 and 7 OR only 5 or only 7
*/
#include<stdio.h>
int main ()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	
	if(!(num%5) && !(num%7))
	{
		printf("%d is divisible by both numbers 5 & 7",num);
	}
	else if(!(num%5))
	{
		printf("%d is only divisible by 5 ",num);
	}
	else if(!(num%7))
	{	
		printf("%d is only divisible by 7 ",num);
	}
	else
	{
		printf("%d is not divisible by 5 & 7",num);
	}


return 0;
}
