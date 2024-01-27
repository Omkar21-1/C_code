
/* 
   QUESTION 
  
   7.Create a C function to rotate a matrix 90 degrees clockwise. 

*/



#include<stdio.h>
#define SIZE 30				/* size of array */

/* DECLARATION OF GLOBAL VARIABLE */
int i;					/* using in loops for rows */
int j;					/* using in loops for columns */


/* FUNCTION DECLARATION or FUNCTION PROTOTYPE */
void rotate_matrix_90_degree();
int get_rows();
int get_columns();
void fill_matrix(int [SIZE][SIZE],int,int);
void display_matrix(int [SIZE][SIZE],int,int);
void rotate_matrix(int [SIZE][SIZE],int,int);


/* FUNCTION BODY or FUNCTION CODE or FUNCTION DEFINATION */
int get_rows()
{
	int m;
	printf("\nEnter Rows of Matrix : ");
	scanf("%d",&m);
	return m;
}

int get_columns()
{
	int n;
	printf("\nEnter Columns of Matrix : ");
	scanf("%d",&n);
	return n;
}

void fill_matrix(int a[SIZE][SIZE],int m,int n)
{
	printf("\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}

void display_matrix(int a[SIZE][SIZE],int m,int n)
{
	printf("\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
}

void rotate_matrix(int a[SIZE][SIZE],int m,int n)
{
	printf("\nRotating matrix clockwise by 90 degree :\n");
	for(j=0; j<n; j++)
	{
		for(i=(m-1); i>=0; i--)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}	
}

void rotate_matrix_90_degree()
{
	int a[SIZE][SIZE];			/* declaring variable "a" for 2D array (matrix) */
	int m;					/* using variable "m" for how many rows in matrix */
	int n;					/* using variable "n" for how many columns in matrix */

	m = get_rows();				/* getting how many rows in matrix by calling "get_rows" function */
	n = get_columns();			/* getting how many columns in matris by calling "get_columns" function */

	fill_matrix(a,m,n);			/* accepting the elements of an 2d array (matrix) from user */
	display_matrix(a,m,n);			/* displaying matrix */

	rotate_matrix(a,m,n);			/* rotating matrix by 90 degree clockwise */
	/*display_matrix(a,m,n);		 displaying matrix after rotating clock wise 90 degrees */

}


/* ENTRY POINT FUNCTION */
int main()
{
	
	rotate_matrix_90_degree();	

	return 0;
