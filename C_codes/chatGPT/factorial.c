#include<stdio.h>

void factorial();

void factorial()
{
	int n;
	int fact=1;
	int i;
	printf("Enyer Number : ");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
		fact = fact*i;
	}
	printf("Factorial of %d is : %d\n",n,fact);

}

int main()
{
	factorial();
}
