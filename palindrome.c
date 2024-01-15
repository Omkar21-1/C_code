/* 
	Palindrome: LOGIC	
	
	adhi NUmber reverse karaycha
	reverse jhalela number check karaycha orignal number sobat
	ek buffer memory vapraychi check karnya sathi
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,tnum,rem,rev;
	printf("Enter Number :");
	scanf("%d",&num);

	tnum=num;

	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}	
	if(tnum==rev)
	{
		printf("%d is palindrome",rev);
	}
	else
	{
		printf("%d is not palindrome");
	}

	return 0;
}
