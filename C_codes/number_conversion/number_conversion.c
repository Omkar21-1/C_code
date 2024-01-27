#include<stdio.h>
#define SIZE 100


/* GLOBAL VAIRABLE's  */
int i;



/* FUNCTION DECLARATION or FUNCTION PROTOTYPE  */

int accept_number();

void display_conversion(int [SIZE],int);

void binary_conversion(int [SIZE],int);
void octal_conversion(int [SIZE],int);
void hexadecimal_conversion(int [SIZE],int);

void disp()
{
	printf("\nWORKING\n");
}


/* FUNCTION BODY or FUNCTION DEFINATION or FUNCTION CODE */

int accept_number()
{
	int number;
	printf("Enter Number : ");
	scanf("%d", &number);

	return number;
}

void display_conversion(int a[SIZE],int i)
{
	i--;
	for( ; i>=0; i--)
	{
		a[i]<=9 ?printf("%d",a[i]) : printf("%c",a[i]+55);
	}
	printf("\n");
}


void binary_conversion(int a[SIZE],int number)
{
	i=0;
	while(number>0)
	{
		a[i] = number%2;
		i++;
		number = number/2;
	}
	
	display_conversion(a,i);
}

void octal_conversion(int a[SIZE],int number)
{
	i=0;
	while(number>0)
	{
		a[i] = number%8;
		i++;
		number = number/8;
	}
	
	display_conversion(a,i);
}

void hexadecimal_conversion(int a[SIZE],int number)
{
	i=0;
	while(number>0)
	{
		a[i] = number%16;
		i++;
		number = number/16;
	}
	
	display_conversion(a,i);
}

int main()
{
	int number;					/* STORING THE NUMBER WHICH WILL BE CONVERT  */
	int a[SIZE];					/* FOR STORING CONVERSION VALLUES */


	number = accept_number();			/* GETTING NUMBER FROM USER FOR NUMBER CONVERSION */


	printf("\nDECIMAL TO BINARY\n");
	binary_conversion(a,number);			/* DECIMAL TO BINARY  */


	printf("\nDECIMAL TO OCTAL\n");
	octal_conversion(a,number);			/* DECIMAL TO OCTAL  */


	printf("\nDECIMAL TO HEXADECIMAL\n");
	hexadecimal_conversion(a,number);		/* DECIMAL TO HEXADECIMAL  */


	return 0;
}

