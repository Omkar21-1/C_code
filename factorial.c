#include<stdio.h>
int factorial(long int);

int factorial(long int num)
{
	long int i,fact=1;
	
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{	
	long int num,fact;
	printf("Enter number :");
	scanf("%d",&num);
	if(num<=12)
	{
		fact = factorial(num);
		printf("Factorial :%ld\n",fact);
	}
	else
	{
		printf("factorial is too long!!!\n");
	}
	return 0;
}
