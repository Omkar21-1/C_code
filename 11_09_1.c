/*
 accept the number from user and 
 check weather it is natural number or not 
*/


#include<stdio.h>
int main()
{
 long int num;
 	
 	printf("enter a number :");
	scanf("%ld",&num);

    	if(num>0)
	{
		printf("%ld is natural number",num);
	}
	else
	{
        	printf("%ld is not natural number",num);
	}

return 0;
} 
