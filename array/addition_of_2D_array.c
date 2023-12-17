#include<stdio.h>
#define SIZE 30		/* using SIZE for size of 2D array */

/* DECLARING GLOBAL VARIABLE */
int i;				//Using variable in loops for ROW's
int j;				//Using variable in loops FOR COLUMN's
int rows;			//using for storing how many ROWS in 2d array
int columns;			//using for storing how many COLUMN in 2d array
int answer[SIZE][SIZE];		//using for storing the answer after calculation 


/* FUNCTION PROTOTYPE or FUNCTION DECLARATION */

void get_rows_and_columns();
void accept_2D_array_elements(int [SIZE][SIZE],int,int);
void display(int [SIZE][SIZE],int,int);
void addition_of_2D_array(int [SIZE][SIZE],int [SIZE][SIZE],int,int);
void multiplication_of_2D_array(int [SIZE][SIZE],int [SIZE][SIZE],int,int);
void substraction_of_2D_array(int [SIZE][SIZE],int [SIZE][SIZE],int,int);


void addition_substraction_multiplication();


/* FUNCTION DEFINATION or FUNCTION BODY or FUNCTION CODE */

void get_rows_and_columns()
{
	printf("How Many Rows in Matris : ");
	scanf("%d",&rows);

	printf("How Many Columns in Matrix : ");
	scanf("%d",&columns);

	printf("\n");
}

void accept_2D_array_elements(int mat[SIZE][SIZE],int m,int n)
{
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter Data for [%d] [%d] : ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
}

void display(int mat[SIZE][SIZE],int m,int n)
{
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{	
			printf("%3d ",mat[i][j]);
		}
		printf("\n");
	}
}

void addition_of_2D_array(int a[SIZE][SIZE],int b[SIZE][SIZE],int m,int n)
{
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			answer[i][j] = a[i][j] + b[i][j];
		}
	}	
}

void multiplication_of_2D_array(int a[SIZE][SIZE],int b[SIZE][SIZE],int m,int n)
{
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			answer[i][j] = a[i][j] * b[i][j];
		}
	}	
}

void substraction_of_2D_array(int a[SIZE][SIZE],int b[SIZE][SIZE],int m,int n)
{
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			answer[i][j] = a[i][j] - b[i][j];
		}
	}	
}


	void addition_substraction_multiplication()
	{
		/* DECLARING 2D ARRAY VARIABLE */
		int first_array[SIZE][SIZE];
		int second_array[SIZE][SIZE];
		

		/* ACCEPTING ROWS AND COLUMNS FROM USER */
		get_rows_and_columns();
		
		/* GETTING ARRAY ELEMENTS IN "first_array" */
		printf("Enter Elements of Matrix A\n");
		accept_2D_array_elements(first_array,rows,columns);
		
		/* GETTING ARRAY ELEMENTS IN "secong_array" */
		printf("Enter Elements of Matrix B\n");
		accept_2D_array_elements(second_array,rows,columns);
		

		/* DIPLAYING 2D ARRAY */
		printf("\nMatrix A\n");
		display(first_array,rows,columns);

		printf("\nMatrix B\n");
		display(second_array,rows,columns);
		
		
		
		/* ADDITION OF 2D ARRAY ELEMNTS */
		addition_of_2D_array(first_array,second_array,rows,columns);
		
		/* DISPLAYING ADDITION OF 2D ARRAY */
		printf("\nAddition of Matrix A & Matrix B\n");
		display(answer,rows,columns);


		
		/* SUBSTRACTION OF 2D ARRAY ELEMNTS */
		substraction_of_2D_array(first_array,second_array,rows,columns);
		
		/* DISPLAYING SUBSTRACTION  OF 2D ARRAY */
		printf("\nSubstraction of Matrix A & Matrix B\n");
		display(answer,rows,columns);
		
		
		
		/* MULTIPLICATION OF 2D ARRAY ELEMNTS */
		multiplication_of_2D_array(first_array,second_array,rows,columns);
		
		
		/* DISPLAYING MULTIPLICATION OF 2D ARRAY */
		printf("\nMultiplication of Matrix A & Matrix B\n");
		display(answer,rows,columns);
		
	}



/* ENTRY POINT FUNCTION */
int main()
{
	addition_substraction_multiplication();
		
	return 0;
}


















