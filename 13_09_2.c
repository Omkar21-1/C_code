/*
accept three numbers from user and 
check weather the 3rd number is between 1st number and 2nd number
*/
#include<stdio.h>
int main()
{
	int first_num,second_num,third_num;

	printf("enter first number :");
	scanf("%d",&first_num);
	
	printf("enter second number :");
	scanf("%d",&second_num);

	printf("enter third number :");
	scanf("%d",&third_num);
	
	if(first_num==second_num && first_num==third_num)
	{
		printf("all numbers are equal");
	}
	else if( third_num>=first_num && third_num<=second_num || third_num>=second_num && third_num<=first_num)
	{
		printf("YES");
	}	
	else
	{
	printf("NO");
	}



return 0;
}
