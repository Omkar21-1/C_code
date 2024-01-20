#include<stdio.h>
int main()
{
	 int first_num,second_num,third_num;

	 printf("enter first number :");
	 scanf("%d",&first_num); 

	 printf("enter a second number :");
	 scanf("%d",&second_num);

	 printf("enter a third number :");
	 scanf("%d",&third_num);

	if( first_num == second_num )
	{	   
		if ( second_num == third_num )
       		{			
			printf("all numbers are equal");
		}
		else 
		{
			printf("%d is grater",third_num);  // // // 0 0 5 ______5 output yenya sathi 
		}
	}			

	else if( first_num >= second_num )						
	{
		if( first_num > third_num )
		{		   
			printf("%d is grater",first_num);
		}
		else
		{	
       			printf("%d is greater",third_num);
		}	    
	}
	 
	else if( second_num > third_num )			
	{
		printf("%d is grater",second_num);	
	}

	else
	{
		printf("%d is grater",third_num);	
	}


	return 0;
}
