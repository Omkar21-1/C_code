#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,tnum,rem,rev;
	printf("Enter Number :");
	scanf("%d",&num);
 
	tnum=num;

	if(num<0)
	{
		printf("WRONG INPUT !!!");
		exit(0);
	}
	
	while(num>0)
	{
	rem = num%10;
	rev = (rev*10)+rem;
	num = num/10;
	}
	
	printf("Reverse of %d is %d",tnum,rev);

	return 0;
}
