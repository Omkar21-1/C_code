#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,tnum,armstrong=0,rem;

	printf("Check First 7 digit Armstrong Number\n");
	printf("Enter Number :");
	scanf("%d",&num);

	if(num<0)
	{
		printf("Please Enter Positive Number!!!");
		exit(0);
	}
	
	tnum=num;

	while(num>0)
	{
		rem = num%10;

		{
			if(tnum<10)
			{
				armstrong = (rem)+armstrong;
			}
			else if(tnum<99)
			{
				armstrong = (rem*rem)+armstrong;
			}	
			else if(tnum<999)
			{
				armstrong = (rem*rem*rem)+armstrong;
			}
			else if(tnum<9999)
			{
				armstrong = (rem*rem*rem*rem)+armstrong;
			}		
			else if(tnum<99999)
			{
				armstrong = (rem*rem*rem*rem*rem)+armstrong;
			}
			else if(tnum<999999)
			{
				armstrong = (rem*rem*rem*rem*rem*rem)+armstrong;
			}
			else if(tnum<9999999)
			{
				armstrong = (rem*rem*rem*rem*rem*rem*rem)+armstrong;
			}
			else if(tnum<9999999)
			{
				armstrong = (rem*rem*rem*rem*rem*rem*rem)+armstrong;
			}
		}

		num = num/10;
	}


	if(tnum==armstrong)
	{
		printf("%d is amstrong",tnum);
	}
	else
	{
		printf("%d is not armstrong",tnum);
	}
	return 0;
}

