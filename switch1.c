/*
 * Write C program to accept two digit an print it in word
 *Fro Example ,Input : 21
 *	       Output: twenty one	
 */ 
#include<stdio.h>
int main()
{
	int number;    						//To store input value 
	
	printf("Enter Two Digit Number :");			//display msg on screen
	scanf("%d",&number);					//Get a input from the and store in variable "number"

	switch(number)
	{
		case 19:
			printf("NINTEEN\n");
		case 18:	
			printf("EIGHTEEN\n");
		case 17:
			printf("SEVENTEEN\n");
		case 16:
			printf("SIXTEEN\n");
		case 15:
			printf("FIFTEEN\n");
		case 14:
			printf("FOURTEEN\n");
		case 13:
			printf("THIRTEEN\n");
		case 12:
			printf("TWELE\n");
		case 11:
			printf("ELEVEN\n");
		case 10:
			printf("TEN\n");	
	
	}
return 0;
}
