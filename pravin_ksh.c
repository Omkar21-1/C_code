#include<stdio.h>

int main()
{
	int n;
	int temp_n;
	int a;
	int rev=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	temp_n = n;
	
	while(temp_n)
	{
		a = temp_n%10;
		rev = (rev*10)+a;
		temp_n = temp_n/10;
	}
	
	printf("Sum of Given no. + Reverse no. : %d\n",n+rev);

	return 0;
}
