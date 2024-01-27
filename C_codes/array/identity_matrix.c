/* 
   QUESTION 
  
  9.Implement a function to check if a matrix is an identity matrix.

*/



#include<stdio.h>
#include<stdlib.h>
#define SIZE 30				/* size of array */

/* DECLARATION OF GLOBAL VARIABLE */
int i;					/* using in loops for rows */
int j;					/* using in loops for columns */


/* FUNCTION DECLARATION or FUNCTION PROTOTYPE */
int get_rows();
int get_columns();
void fill_matrix(int [SIZE][SIZE],int,int);
void display_matrix(int [SIZE][SIZE],int,int);

void check_idintity_matrix();
void check(int[SIZE][SIZE],int,int);

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

void check_idintity_matrix()
{
	int **a;				/* declaring variable "a" for 2D array (matrix) */
	int m;					/* using variable "m" for how many rows in matrix */
	int n;					/* using variable "n" for how many columns in matrix */

	m = get_rows();				/* getting how many rows in matrix by calling "get_rows" function */
	n = get_columns();			/* getting how many columns in matris by calling "get_columns" function */
	
	a = (int **) malloc(n * sizeof(int));
	if(a==NULL)
	{
		printf("Insufficient Storage \n");
		exit(0);
	}
	for(i=0; i<n i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
		if(a[i]==NULL)
		{
			printf("Insufficient Storage \n");
			exit(0);
		}
	}
	
	
	if(m!=n)
	{
		printf("\nPlease Enter a Square Matrix!!!\nRows=Columns\n");
		exit(0);
	}

	fill_matrix(a,m,n);			/* accepting the elements of an 2d array (matrix) from user */
	
	display_matrix(a,m,n);
	check(a,m,n);
	
	
	
	for(i=0; i<n i++)
	{
		free(a[i]);
	}
	free(a);
	
	
}

void check(int mat[SIZE][SIZE],int m,int n)
{
	int check=0;
	for(i=0; i<m; i++)
	{
		if(mat[i][i]!=1)
		{
			check++;
			break;
		}
		for(j=0; j<n; j++)
		{
			if(i!=j)
			{
				if(mat[i][j]!=0)
				{
					check++;
					break;
				}
			}
		}
	}
	if(check==0)
	{
		printf("\nGiven Matrix is Identity Matrix\n");
	}
	else 
	{
		printf("\nGiven Matrix is Not Identity Matrix\n");
	}
}

/* ENTRY POINT FUNCTION */
int main()
{
	
	check_idintity_matrix();

	return 0;
}
