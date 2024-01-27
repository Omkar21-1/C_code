/*
 	Q. Accept any n numbers and display its sum.
	n=3
	enter data : 10
	enter data : 27
	enter data : 6
	Sum : 43  
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,data,sum;   // n=number of how many times data you want to enter.
	sum=0;		    // i=used in for loop.
			    // data= to store data from user.
			    // sum= sum of all entered data.

	printf("How many numbers of summission you want :");
	scanf("%d",&n);	

	if(n<0)
	{
		printf("Please enter a positive number!!!");
		exit(0);
	}

	for(i=1; i<=n; i++)
	{

		printf("%d) Enter Data : ",i);
		scanf("%d",&data);

		sum=sum+data;
	}
	
		printf("__________________\n");
		printf("          sum : %d",sum);
	
	return 0;
}
