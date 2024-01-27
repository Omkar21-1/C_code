#include<stdio.h>
void reverse();



void reverse()
{
	int n;
	int rem;
	int rev;
	
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem = n%10;
		rev = rev *10 + rem;
		n = n/10;
	}
	printf("Reversed : %d",rev);
}

int main()
{
	reverse();	
	return 0;
}
