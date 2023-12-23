#include<stdio.h>

int main()
{
	int n;
	int temp_n;
	int a;
	int arm=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	temp_n = n;
	
	while(temp_n)
	{
		a = temp_n%10;
		arm = arm+(a*a*a);
		temp_n = temp_n/10;
	}
	
	printf("Armstrong of %d : %d\n",n,arm);

	return 0;
}
