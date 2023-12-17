
/* 
   QUESTION 
  
   8.Write a program to calculate the determinant of a 3x3 matrix.

*/



#include<stdio.h>
#include<stdlib.h>
#define SIZE 30				/* size of array */

/* DECLARATION OF GLOBAL VARIABLE */
int i;					/* using in loops for rows */
int j;					/* using in loops for columns */


/* FUNCTION DECLARATION or FUNCTION PROTOTYPE */
void m3x3_determinant();
int get_rows();
int get_columns();
void fill_matrix(int [SIZE][SIZE],int,int);
void display_matrix(int [SIZE][SIZE],int,int);

void diterminant_of_matrix_3x3(int [SIZE][SIZE],int,int);
int calculate_2x2_matrix(int[SIZE]);
void final_ans(int[SIZE][SIZE],int,int,int);


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

void display_1d_array(int arr[SIZE]) 			/* 2x2 chya mtrix madhun je 2x2 cha matrix ala ahe te dsiplay karayla.... VALUES DISPLAY */
{
	for(i=0; i<4; i++)
	{
		printf("%3d ",arr[i]);
	}
	printf("\n");
}

int calculate_2x2_matrix(int mat[SIZE])
{
	int ans;
	
	ans = ((mat[0]*mat[3]) - mat[1]*mat[2]);

	return ans;
}

void final_ans(int mat[SIZE][SIZE],int a,int b,int c)
{

	int ans;
	int row1[SIZE];

	for(j=0; j<3; j++)
	{
		row1[j] = mat[0][j];
	}
	
	ans = ( (row1[0]*a) - (row1[1]*b) + (row1[2]*c) ); 

	printf("Determinant of Above Matrix is  = %d \n",ans);
}


void diterminant_of_matrix_3x3(int mat[SIZE][SIZE],int m,int n)
{
	int a1[SIZE];					/* 1 row & 1 column sodun je urta te store karayla declare kela ahe */
	int b1[SIZE];					/* 1 row & 2 column sodun je urta te store karayla declare kela ahe */
	int c1[SIZE];					/* 1 row & 3 column sodun je urta te store karayla declare kela ahe */

	int a=0;					/* array cha index +1 karayla declare kele ahet */
	int b=0;
	int c=0;

	for(i=1; i<m; i++)
	{
		for(j=1; j<n; j++)				// | 1 2 3 |   a1 =
		{						// | 4 5 6 | = | 5 6 8 9 |
			a1[a] = mat[i][j];			// | 7 8 9 |   
			a++;					
		}						
		for(j=0; j<n; j++)				//| 1 2 3 |   b1 =
		{						//| 4 5 6 | = | 4 6 7 9|
			b1[b] = mat[i][j];			//| 7 8 9 |   
			b++;
			j++;
		}
		for(j=0; j<(n-1); j++)				//| 1 2 3 |   c1 =
		{						//| 4 5 6 | = | 4 5 7 8|
			c1[c] = mat[i][j];			//| 7 8 9 |   
			c++;
		}
	}


	a = calculate_2x2_matrix(a1);				/* | 5 6 8 9 | = (5*9) - (6*8)  = 45-48  = -3*/
	b = calculate_2x2_matrix(b1);				/* same */
	c = calculate_2x2_matrix(c1);				/* same */



	final_ans(mat,a,b,c);
	

}





void m3x3_determinant()
{	
	int a[SIZE][SIZE];			/* declaring variable "a" for 2D array (matrix) */
	int m;					/* using variable "m" for how many rows in matrix */
	int n;					/* using variable "n" for how many columns in matrix */

	m = get_rows();				/* getting how many rows in matrix by calling "get_rows" function */
	n = get_columns();			/* getting how many columns in matris by calling "get_columns" function */

	
	if(m!=3 && n!=3)
	{
		printf("\nPlease Enter a 3x3 Diterminant Matrix\n");
		exit(0);
	}
	fill_matrix(a,m,n);			/* accepting the elements of an 2d array (matrix) from user */
	display_matrix(a,m,n);			/* displaying matrix */

	diterminant_of_matrix_3x3(a,m,n);
				
		

}



/* ENTRY POINT FUNCTION */
int main()
{
	
	m3x3_determinant();	

	return 0;
}
